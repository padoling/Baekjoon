#include <stdio.h>
#include <algorithm>
using namespace std;
long long a[1000001];
int main()
{
  int n, temp;
  long long ans;
  int cnt = 1;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%lld", &a[i]);
  }
  sort(a, a+n);
  ans = a[0];
  temp = 0;
  for(int i=1; i<n; i++) {
    if(a[i-1] != a[i]) {
      if(temp < cnt) {
        temp = cnt;
        ans = a[i-1];
      }
      cnt = 1;
    } else
     cnt += 1;
  }
  if(temp < cnt) {
    ans = a[n-1];
  }
  printf("%lld", ans);
  return 0;
}
