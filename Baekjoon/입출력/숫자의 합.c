#include <stdio.h>

int main(void)
{
  int N;
  int temp, total=0;
  scanf("%d", &N);
  while(N--) {
    scanf("%1d", &temp);
    total += temp;
  }
  printf("%d\n", total);
  return 0;
}
