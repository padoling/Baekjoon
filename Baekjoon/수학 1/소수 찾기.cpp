#include <stdio.h>
using namespace std;

bool prime(int n) {
  if(n<2)
    return false;
  else {
    for(int i=2; i*i<=n; i++) {
      if(n%i == 0)
        return false;
    }
    return true;
  }
}

int main()
{
  int n, i, j, p;
  int ans = 0;

  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &p);
    if(prime(p) == 1)
      ans++;
  }
  printf("%d", ans);
  return 0;
}
