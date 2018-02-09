#include <stdio.h>
using namespace std;
bool e[1000001];
int main()
{
  int m, n;
  scanf("%d %d", &m, &n);
  for(int i=2; i<=n; i++) {
    if(e[i]==false) {
      if(i>=m)
		  printf("%d\n", i);
      for(int j=i*2; j<=n; j+=i) {
        e[j] = true;
      }
    }
  }
  return 0;
}
