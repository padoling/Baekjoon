#include <cstdio>
#include <vector>
using namespace std;
vector<int> g[1001];
bool check[1001];
void dfs(int x) {
  check[x] = true;
  for(int i=0; i<g[x].size(); i++) {
    int y = g[x][i];
    if(check[y] == false) {
      dfs(y);
    }
  }
}
int main()
{
  int n, m;
  int cnt = 0;
  scanf("%d %d", &n, &m);
  for(int i=0; i<m; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    g[u].push_back(v); g[v].push_back(u);
  }
  for(int i=1; i<=n; i++) {
    if(check[i] == false) {
      cnt += 1;
      dfs(i);
    }
  }
  printf("%d\n", cnt);
  return 0;
}
