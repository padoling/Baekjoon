#include <stdio.h>
#include <string.h>
char two[1000000];
int eight[1000000];

int main()
{
  int l, i, j;
  scanf("%s", two);
  l = strlen(two);
  for(i=0; i<l; i++) {
    two[i] -= 48;
  }
  if(l%3 == 1) {
    printf("%d", 1);
  } else if(l%3 == 2) {
    printf("%d", 2 + two[1]);
  }
  for(i=l%3; i<l; i+=3) {
    printf("%d", two[i]*4 + two[i+1]*2 + two[i+2]);
  }
  return 0;
}
