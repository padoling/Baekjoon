#include <stdio.h>

int main()
{
  int T, n, i, j;
  int d[12];
  d[0] = 1;
  d[1] = 1;
  d[2] = 2;
  scanf("%d", &T);
  for(i=0; i<T; i++) {
    scanf("%d", &n);
    for(j=3; j<=n; j++)
      d[j] = d[j-1] + d[j-2] + d[j-3];
    printf("%d\n", d[n]);
  }
  return 0;
}
