#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
void bpt() {
  vector<int> g[20001];
  queue<int> q;
  int check[20001] = {0};
  int v, e;
  scanf("%d %d", &v, &e);
  for(int i=0; i<e; i++) {
    int u1, u2;
    scanf("%d %d", &u1, &u2);
    g[u1].push_back(u2); g[u2].push_back(u1);
  } // 그래프 정보 저장
  check[1] = 1; q.push(1);
  while(!q.empty()) {
    int x = q.front(); q.pop();
    for(int i=0; i<g[x].size(); i++) {
      int y = g[x][i];
      if(check[y] == 0) {
        if(check[x] == 1) {
          check[y] = 2; q.push(y);
        } else if(check[x] == 2) {
          check[y] = 1; q.push(y);
        }
      } else if(check[x] == 1 && check[y] == 1|| check[x] == 2 && check[y] == 2) {
          printf("NO\n");
          return;
      }
    }
  }
  printf("YES\n");
}
int main()
{
  int k;
  scanf("%d", &k);
  while(k--) {
    bpt();
  }
  return 0;
}
