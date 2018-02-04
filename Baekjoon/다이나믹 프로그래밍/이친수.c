#include <stdio.h>

int main()
{
  int n, i, j;
  long long ans=0;
  long long d[91][2] = {0};
  d[1][1] = 1;

  scanf("%d", &n);
  for(i=2; i<=n; i++) {
	d[i][0] = d[i-1][0] + d[i-1][1];
	d[i][1] = d[i-1][0];
  }
  ans = d[n][0] + d[n][1];
  printf("%lld", ans);
  return 0;
}
