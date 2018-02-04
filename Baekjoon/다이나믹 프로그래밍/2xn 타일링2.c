#include <stdio.h>

int main()
{
  int n,i;
  int d[1001];
  scanf("%d", &n);
  d[0] = 1;
  d[1] = 1;
  for(i=2; i<=n; i++) {
    d[i] = d[i-1] + 2*d[i-2];
    d[i] %= 10007;
  }
  printf("%d", d[n]);
  return 0;
}
