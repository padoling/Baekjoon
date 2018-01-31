#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char data[600002];
  int size;
} Stack;

void push(char x, Stack *stack) {
  stack->data[stack->size] = x;
  stack->size += 1;
}

char pop(Stack *stack) {
  if(stack->size == 0)
    return 0;
  else {
    stack->size -= 1;
    return stack->data[stack->size];
  }
}

int empty(Stack* stack) {
  if(stack->size == 0)
    return 1;
  else
    return 0;
}

char top(Stack *stack) {
  if(stack->size == 0)
    return 0;
  else
    return stack->data[(stack->size)-1];
}

int main(void)
{
  char str[100002];
  int num, i, n;
  Stack* left = (Stack*)malloc(sizeof(Stack));
  Stack* right = (Stack*)malloc(sizeof(Stack));

  left->size = 0;
  right->size = 0;
  scanf("%s", str);
  n = strlen(str);
  for(i=0; i<n; i++) {
    push(str[i], left);
  }
  scanf("%d", &num);
  for(i=0; i<num; i++)
  {
    char cmd;
    scanf(" %c", &cmd); //엔터...!
    if(cmd == 'L') {
      if(!empty(left)) {
        push(pop(left), right);
      }
    }
    else if(cmd == 'D') {
      if(!empty(right)) {
        push(pop(right), left);
      }
    }
    else if(cmd == 'B') {
      if(!empty(left)) {
        pop(left);
      }
    }
    else if(cmd == 'P') {
      char c;
      scanf(" %c", &c);
      push(c, left);
    }
  }

  while(!empty(left)) {
    push(pop(left), right);
  }
  while(!empty(right)) {
    printf("%c", pop(right));
  }
  return 0;
}
