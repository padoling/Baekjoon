#include <cstdio>
using namespace std;
int a[1001];
int d1[1001];
int d2[1001];
int main() {
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i=0; i<n; i++) {
    d1[i] = 1;
    for(int j=0; j<i; j++) {
      if(a[i] > a[j] && d1[i] < d1[j] + 1) {
        d1[i] = d1[j] + 1;
      }
    }
  }
  for(int i=n-1; i>=0; i--) {
    d2[i] = 1;
    for(int j=n-1; j>i; j--) {
      if(a[i] > a[j] && d2[i] < d2[j] + 1) {
        d2[i] = d2[j] + 1;
      }
    }
  }
  int ans = 0;
  for(int i=0; i<n; i++) {
    if(ans < d1[i] + d2[i] - 1) {
      ans = d1[i] + d2[i] - 1;
    }
  }
  printf("%d", ans);
  return 0;
}
