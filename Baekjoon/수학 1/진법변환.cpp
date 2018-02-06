#include <stdio.h>
#include <string.h>

int main()
{
  char base[100];
  int b, l, i, j, k;
  long long ans = 0;

  scanf("%s", base);
  scanf("%d", &b);
  l = strlen(base);
  for(i=0; i<l; i++) {
	j=l-i-1;
    if(base[i] >= 'A' && base[i] <= 'Z')
      base[i] -= 55;
    else if(base[i] >= '0' && base[i] <= '9')
      base[i] -= 48;
	k=base[i];
    while(j--)
		k *= b;
	ans += k;
  }
  printf("%lld", ans);
  return 0;
}
