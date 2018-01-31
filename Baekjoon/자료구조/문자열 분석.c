#include <stdio.h>
#include <string.h>

int main()
{
  int i, j, n;
  int lower, upper, num, space;
  char str[102];
  while(fgets(str, 102, stdin) != NULL) {
    n = strlen(str);
	lower=0, upper=0, num=0, space=0;
    for(j=0; j<n-1; j++) {
      if('A' <= str[j] & 'Z' >= str[j])
        upper++;
      else if('a' <= str[j] & 'z' >= str[j])
        lower++;
      else if('0' <= str[j] & '9' >= str[j])
        num++;
      else if(str[j] == ' ')
        space++;
    }
    printf("%d %d %d %d\n", lower, upper, num, space);
  }
  return 0;
}
