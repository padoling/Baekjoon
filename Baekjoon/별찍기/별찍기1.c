#include <stdio.h>

int main()
{
  int N, i=0;
  scanf("%d", &N);
  while(i<N) {
    int j=0;
    while(j<=i) {
      printf("*");
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}
