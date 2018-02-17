#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct Point {
  int x, y;
};
bool cmp(const Point &u, const Point &v) {
  if(u.x < v.x) {
    return true;
  } else if(u.x == v.x) {
    return u.y < v.y;
  } else {
    return false;
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  vector<Point> a(n);
  for(int i=0; i<n; i++) {
    scanf("%d %d", &a[i].x, &a[i].y);
  }
  sort(a.begin(), a.end(), cmp);
  for(int i=0; i<n; i++) {
    printf("%d %d\n", a[i].x, a[i].y);
  }
  return 0;
}
