#include <stdio.h>

int main()
{
  int n, i, j;
  long long d[101][10];
  long long mod = 1000000000;
  long long sum=0;
  d[1][0] = 0;

  scanf("%d", &n);
  for(i=1; i<=9; i++)
    d[1][i] = 1;
  for(i=2; i<=n; i++) {
    for(j=0; j<=9; j++) {
		d[i][j] = 0;
      if(j-1>=0)
        d[i][j] += d[i-1][j-1];
      if(j+1<=9)
        d[i][j] += d[i-1][j+1];
      d[i][j] %= mod;
    }
  }
  for(i=0; i<=9; i++)
    sum += d[n][i];
  sum %= mod;
  printf("%d", sum);
  return 0;
}
