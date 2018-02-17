#include <stdio.h>
using namespace std;
int a[10001] = {0};
int main()
{
  int n;
  int temp = 0;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &temp);
    a[temp] += 1;
  }
  for(int i=1; i<=10000; i++) {
    if(a[i] > 0) {
      for(int j=0; j<a[i]; j++) {
        printf("%d\n", i);
      }
    }
  }
  return 0;
}
