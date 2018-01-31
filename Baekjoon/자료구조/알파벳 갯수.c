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
    int x=0;
    for(i=0; i<n; i++) {
      if(c == S[i])
        x++;
    }
    printf("%d ", x);
  }
  return 0;
}
