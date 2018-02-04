#include <stdio.h>

int d[1000001];

int go(int n) {
	int i;
  d[1] = 0;
  for(i=2; i<=n; i++) {
    d[i] = d[i-1]+1;
    if(i%2 == 0 && d[i] > d[i/2]+1) {
      d[i] = d[i/2]+1;
    }
    if(i%3 == 0 && d[i] > d[i/3]+1) {
      d[i] = d[i/3]+1;
    }
  }
  return d[n];
}

int main()
{
  int N;
  scanf("%d", &N);
  printf("%d", go(N));
  return 0;
}
