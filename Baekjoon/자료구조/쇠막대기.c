#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int data[100002];
  int size;
} Stack;

void push(int x, Stack *stack) {
  stack->data[stack->size] = x;
  stack->size += 1;
}

int pop(Stack *stack) {
  if(stack->size == 0)
    return -1;
  else {
    stack->size -= 1;
    return stack->data[stack->size];
  }
}

int top(Stack *stack) {
  if(stack->size == 0)
    return -1;
  else
    return stack->data[(stack->size)-1];
}

int main(void)
{
  char str[100002];
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  int i, n, sum=0;
  scanf("%s", str);
  n = strlen(str);
  stack->size = 0;
  for(i=0; i<n; i++) {
    if(str[i] == '(')
      push(i, stack);
    else if(str[i] == ')') {
      if(top(stack) == i-1) {
        pop(stack);
        sum += stack->size;
      }
      else {
        pop(stack);
        sum += 1;
      }
    }
  }
  printf("%d", sum);
  return 0;
}
