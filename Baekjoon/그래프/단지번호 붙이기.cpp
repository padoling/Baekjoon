#include <cstdio>
#include <algorithm>
using namespace std;
int n;
int house[25*25];
int map[25][25];
int d[25][25];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
void dfs(int x, int y, int cnt) {
  d[x][y] = cnt;
  for(int i=0; i<4; i++) {
    int nx = x+dx[i];
    int ny = y+dy[i];
    if(0 <= nx && nx < n && 0 <= ny && ny < n) {
      if(map[nx][ny] == 1 && d[nx][ny] == 0) {
        dfs(nx, ny, cnt);
      }
    }
  }
}
int main()
{
  int cnt = 0;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      scanf("%1d", &map[i][j]);
    }
  }
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      if(map[i][j] == 1 && d[i][j] == 0) {
        dfs(i, j, ++cnt);
      }
    }
  }
  printf("%d\n", cnt);
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      house[d[i][j]] += 1;
    }
  }
  sort(house+1, house+cnt+1);
  for(int i=1; i<=cnt; i++) {
    printf("%d\n", house[i]);
  }
  return 0;
}
