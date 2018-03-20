#include <cstdio>
using namespace std;
int a[100001];
long long d[100001];
int main() {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  d[0] = a[0];
  for(int i=1; i<n; i++) {
    d[i] = a[i];
    if(d[i] < d[i-1] + a[i]) {
      d[i] = d[i-1] + a[i];
    }
  }
  long long ans = a[0];
  for(int i=0; i<n; i++) {
    if(ans < d[i]) {
      ans = d[i];
    }
  }
  printf("%lld\n", ans);
  return 0;
}
