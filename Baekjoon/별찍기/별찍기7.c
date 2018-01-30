#include <stdio.h>

int main()
{
  int N, i, j;
  scanf("%d", &N);
  for(i=1; i<=N; i++) {
    for(j=N; j>i; j--)
      printf(" ");
    for(j=0; j<i*2-1; j++)
      printf("*");
    printf("\n");
  }
  for(i=N-1; i>0; i--) {
    for(j=N; j>i; j--)
      printf(" ");
    for(j=0; j<i*2-1; j++)
      printf("*");
    printf("\n");
  }
  return 0;
}
