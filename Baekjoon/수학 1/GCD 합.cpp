#include <stdio.h>

int GCD(long long a, long long b) {
  long long r = a%b;
  if(r == 0) {
    return b;
  } else {
    return GCD(b, r);
  }
}

int main()
{
  int t, n, i, j;
  long long g, sum;
  long long a[100] = {0};

  scanf("%d", &t);
  while(t--) {
    sum = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
      scanf("%lld", &a[i]);
    for(i=0; i<n-1; i++) {
      for(j=n-1; j>i; j--) {
        if(a[i]>a[j])
          g = GCD(a[i], a[j]);
        else
          g = GCD(a[j], a[i]);
        sum += g;
      }
    }
    printf("%lld\n", sum);
  }
  return 0;
}
