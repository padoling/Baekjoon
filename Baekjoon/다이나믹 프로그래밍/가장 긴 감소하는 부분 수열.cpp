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
    d[i] = 1;
    for(int j=1; j<i; j++) {
      if(a[i] < a[j] && d[j] + 1 > d[i]) {
        d[i] = d[j] + 1;
      }
    }
  }
  int ans = 0;
  for(int i=1; i<=n; i++) {
    if(ans < d[i]) {
      ans = d[i];
    }
  }
  printf("%d", ans);
  return 0;
}
