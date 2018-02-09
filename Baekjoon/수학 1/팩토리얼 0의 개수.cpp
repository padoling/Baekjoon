#include <stdio.h>

int main()
{
  int n;
  int ans = 0;
  scanf("%d", &n);
  if(n<5) {
    printf("%d", 0);
    return 0;
  }
  for(int i=5; i<=n; i+=5) {
	int j = i;
    while(j%5 == 0) {
      ans++;
	  j/=5;
    }
  }
  printf("%d", ans);
  return 0;
}
