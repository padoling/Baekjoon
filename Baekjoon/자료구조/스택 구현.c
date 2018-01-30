#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  int data[10000];
  int size;
} Stack;

void push(int x, Stack *stack) {
  stack->data[stack->size] = x;
  stack->size += 1;
}

int pop(Stack *stack){
  if(stack->size == 0)
    return -1;
  else {
    stack->size -= 1;
    return stack->data[stack->size];
  }
}

int size(Stack *stack) {
  return stack->size;
}

int empty(Stack *stack) {
  if(stack->size == 0)
    return 1;
  else
    return 0;
}

int top(Stack *stack) {
  if(stack->size == 0)
    return -1;
  else
    return stack->data[(stack->size)-1];
}

int main()
{
  int N, i, x;
  Stack *stack = (Stack*)malloc(sizeof(Stack));
  stack->size = 0;

  scanf("%d", &N);
  for(i=0; i<N; i++) {
    char cmd[6];
    scanf("%s", cmd);

    if(!strcmp(cmd, "push")) {
      scanf("%d", &x);
      push(x, stack);
    }
    else if(!strcmp(cmd, "pop"))
      printf("%d\n", pop(stack));
    else if(!strcmp(cmd, "size"))
      printf("%d\n", size(stack));
    else if(!strcmp(cmd, "empty"))
      printf("%d\n", empty(stack));
    else if(!strcmp(cmd, "top"))
      printf("%d\n", top(stack));
  }
  return 0;
}
