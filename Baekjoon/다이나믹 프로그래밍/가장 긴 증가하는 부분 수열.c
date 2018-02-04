#include <stdio.h>

int main()
{
  int n, i, k;
  int max = 0;
  int a[1000];
  int d[1000];
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  for(i=0; i<n; i++) {
	  d[i] = 1;
    for(k=0; k<i; k++) {
      if(a[k]<a[i] && d[i]<d[k]+1) {
        d[i] = d[k]+1;
      }
    }
  }
  for(i=0; i<n; i++) {
    if(d[i]>max)
      max = d[i];
  }
  printf("%d", max);
  return 0;
}
