#include <stdio.h>

int main()
{
  int N, x;
  scanf("%d", &N);
  for(x=1; x<10; x++) {
    printf("%d * %d = %d\n", N, x, N*x);
  }
  return 0;
}
