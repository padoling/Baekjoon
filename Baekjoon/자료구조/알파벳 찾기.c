#include <stdio.h>
#include <string.h>

int main()
{
  char S[102];
  char c;
  int i, n;

  scanf("%s", &S);
  n = strlen(S);
  for(c='a'; c<='z'; c++) {
    for(i=0; i<n; i++) {
      if(c == S[i]) {
        printf("%d ", i);
        break;
      }
      else if(i == n-1) {
        printf("-1 ");
      }
    }
  }
  return 0;
}
