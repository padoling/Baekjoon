#include <cstdio>
#include <string>
using namespace std;
int c[1000000] = {0};
int next(int a, int p) {
  int ans = 0;
  for(int i=0; a!=0; i++) {
    int temp = a%10;
    int t = 1;
    for(int j=0; j<p; j++) {
      t *= temp;
    }
    ans += t;
    a /= 10;
  }
  return ans;
}
int check(int a, int p, int cnt) {
  if(c[a] != 0) {
    return c[a];
  }
  c[a] = cnt;
  int n = next(a, p);
  return check(n, p, cnt+1);
}
int main()
{
  int a, p;
  int cnt = 1;
  scanf("%d %d", &a, &p);
  int ans = check(a, p, cnt);
  printf("%d", ans-1);
  return 0;
}
