#include <cstdio>
using namespace std;
int g[1001];
bool check[1001];
void dfs(int x) {
  check[x] = true;
  int y = g[x];
  if(check[y] == false) {
    dfs(y);
  }
}
int main()
{
  int t;
  scanf("%d", &t);
  while(t--) {
	int ans = 0;
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
      int v;
      scanf("%d", &v);
      g[i] = v;
    }
    for(int i=1; i<=n; i++) {
      if(check[i] == false) {
        dfs(i);
        ans += 1;
      }
    }
    printf("%d\n", ans);
    for(int i=1; i<=n; i++) {
      check[i] = false;
    }
  }
  return 0;
}
