#include <stdio.h>
using namespace std;
bool e[1000001];
int p[1000000];

int main()
{
  int i, n = 1;
  int m = 1000000;
  int pn = 0;
  for(i=2; i<=m; i++) {
    if(e[i] == false) {
      if(i!=2) {
        p[pn++] = i;
      }
      for(int j=i*2; j<=m; j+=i) {
        e[j] = true;
      }
    }
  }
  while(n != 0) {
	scanf("%d", &n);
	if(n == 0)
		return 0;
    for(i=0; i<n; i++) {
      if(e[n-p[i]] == false) {
        printf("%d = %d + %d\n", n, p[i], n-p[i]);
        break;
	  }
    }
    if(i==n)
      printf("Goldbach's conjecture is wrong.\n");
  }
  return 0;
}
