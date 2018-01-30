#include <stdio.h>

int main()
{
  int N, i, j;
  scanf("%d", &N);

  for(i=0; i<N; i++) {
    for(j=N; j>i+1; j--) {
      printf(" ");
    }
    for(j=0; j<=i; j++) {
      printf("*");
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
