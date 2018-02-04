#include <stdio.h>

int main()
{
  int n, i, j;
  int P[1001];
  int d[1001];
  d[0] = 0;

  scanf("%d", &n);
  for(i=1; i<=n; i++) {
    scanf("%d", &P[i]);
  }
  for(i=1; i<=n; i++) {
    d[i] = 0;
    for(j=1; j<=i; j++) {
      if(d[i] < d[i-j]+P[j])
        d[i] = d[i-j]+P[j];
    }
  }
  printf("%d", d[n]);
  return 0;
}
