#include <stdio.h>

int main()
{
  int n, i, j, k;
  int ans = 0;
  int d[1001][10] = {0};
  for(i=0; i<=9; i++) {
    d[1][i] = 1;
  }
  scanf("%d", &n);
  for(i=2; i<=n; i++) {
    for(j=0; j<=9; j++) {
      for(k=j; k<=9; k++) {
        d[i][k] += d[i-1][j];
        d[i][k] %= 10007;
      }
    }
  }
  for(i=0; i<=9; i++) {
    ans += d[n][i];
  }
  ans %= 10007;
  printf("%d", ans);
  return 0;
}
