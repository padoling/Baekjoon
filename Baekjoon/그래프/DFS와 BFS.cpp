#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
vector<vector<int>> G(1001);
bool check1[1001];
bool check2[1001];
void dfs(int x) {
  check1[x] = true;
  printf("%d ", x);
  for(int i=0; i<G[x].size(); i++) {
    int y = G[x][i];
    if(check1[y] == false) {
      dfs(y);
    }
  }
}
void bfs(int x) {
  queue<int> q;
  check2[x] = true; q.push(x);
  while(!q.empty()) {
    int y = q.front(); q.pop();
    printf("%d ", y);
    for(int i=0; i<G[y].size(); i++) {
      int z = G[y][i];
      if(check2[z] == false) {
        check2[z] = true; q.push(z);
      }
    }
  }
}
int main()
{
  int n, m, v_start;
  scanf("%d %d %d", &n, &m, &v_start);
  for(int i=0; i<m; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    G[u].push_back(v); G[v].push_back(u);
  }
  for(int i=1; i<=n; i++) {
    sort(G[i].begin(), G[i].end());
  }
  dfs(v_start);
  printf("\n");
  bfs(v_start);
  return 0;
}
