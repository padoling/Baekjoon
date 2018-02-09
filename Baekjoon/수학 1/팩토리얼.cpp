#include <stdio.h>
using namespace std;
int main()
{
  int n;
  long long ans = 1;
  scanf("%d", &n);
  for(int i=n; i>1; i--) {
    ans*=i;
  }
  printf("%lld", ans);
  return 0;
}
