#include <stdio.h>

int main()
{
  int N, i, j;
  scanf("%d", &N);

  for(i=1; i<N; i++) {
    for(j=N; j>i; j--) {
      printf(" ");
    }
    for(j=0; j<i*2-1; j++) {
      if(j==0 || j==i*2-2)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  for(i=0; i<N*2-1; i++)
    printf("*");
  return 0;
}
