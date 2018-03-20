#include <cstdio>
using namespace std;
int a[1001];
int d[1001];
int main() {
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i=1; i<=n; i++) {
    d[i] = a[i];
    for(int j=1; j<i; j++) {
      if(a[j] < a[i] && d[j]+a[i] > d[i]) {
        d[i] = d[j] + a[i];
      }
    }
  }
  int ans = 0;
  for(int i=1; i<=n; i++) {
    if(ans < d[i]) {
      ans = d[i];
    }
  }
	printf("%d\n", ans);
  return 0;
}
