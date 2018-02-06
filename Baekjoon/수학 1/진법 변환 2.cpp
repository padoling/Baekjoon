#include <stdio.h>

int main()
{
  long long n;
  int r[99999];
  int b, i, k=0;
  scanf("%lld %d", &n, &b);
  for(i=0; n>=b; i++) {
    r[i] = n%b;
    n /= b;
	k++;
  }
  for(i=0; i<k; i++) {
    if(r[i]>=10 && r[i]<=35)
      r[i] += 55;
    else if(r[i]<10)
      r[i] += 48;
  }
  if(n>=10 && n<=35)
     n += 55;
    else if(n<10)
      n += 48;
  printf("%c", n);
  for(i=k-1; i>=0; i--) {
    printf("%c", r[i]);
  }
  return 0;
}
