#include <stdio.h>

int main()
{
  char s[100];
  while(scanf("%10s", s)==1) {
      printf("%s\n", s);
  }
  return 0;
}
