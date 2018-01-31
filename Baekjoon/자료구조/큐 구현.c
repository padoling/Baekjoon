#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int arr[10000];
  int begin;
  int end;
} Queue;

Queue* create_queue() {
  Queue* queue = (Queue*)malloc(sizeof(Queue));
  queue->begin = 0;
  queue->end = 0;
  return queue;
}

void push(int x, Queue* queue) {
  queue->arr[queue->end] = x;
  queue->end++;
}

int empty(Queue* queue) {
  if(queue->end == queue->begin)
    return 1;
  else
    return 0;
}

int pop(Queue* queue) {
  if(!empty(queue)) {
    int x;
    x = queue->arr[queue->begin];
    queue->begin++;
    return x;
  }
  else
    return -1;
}

int size(Queue* queue) {
  return queue->end - queue->begin;
}

int front(Queue* queue) {
  if(!empty(queue))
    return queue->arr[queue->begin];
  else
    return -1;
}

int back(Queue* queue) {
  if(!empty(queue))
    return queue->arr[queue->end-1];
  else
    return -1;
}

int main()
{
  Queue* queue = create_queue();
  int N, i;

  scanf("%d", &N);
  for(i=0; i<N; i++)
  {
    char cmd[6];
    scanf("%s", cmd);
    if(!strcmp(cmd, "push")) {
      int x;
      scanf("%d", &x);
      push(x, queue);
    }
    else if(!strcmp(cmd, "pop")) {
      printf("%d\n", pop(queue));
    }
    else if(!strcmp(cmd, "size")) {
      printf("%d\n", size(queue));
    }
    else if(!strcmp(cmd, "empty")) {
      printf("%d\n", empty(queue));
    }
    else if(!strcmp(cmd, "front")) {
      printf("%d\n", front(queue));
    }
    else if(!strcmp(cmd, "back")) {
      printf("%d\n", back(queue));
    }
  }
  return 0;
}
