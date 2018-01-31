#include <stdio.h>
#include <string.h>

int main()
{
  int T,i,j,h;
  char str[51];
  scanf("%d", &T);
  for(i=0; i<T; i++) {
    int k=0;
    int len;
    scanf("%s", str);
	len = strlen(str);
    for(j=0; j<len; j++) {
      if(str[j] == '(')
        k++;
      else if(str[j] == ')') {
        k--;
        if(k<0){
          printf("NO\n");
          break;
        }
      }
    }
    if(k == 0)
      printf("YES\n");
    else if(k>0)
      printf("NO\n");
    for(h=0; h<len; h++)
      str[h] = 0;
  }
  return 0;
}
