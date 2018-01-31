#include <stdio.h>
#include <string.h>

int main()
{
  char str[102];
  char rot[102];
  int n, i;
  fgets(str, 102, stdin);
  n = strlen(str);
  for(i=0; i<n-1; i++) {
    if(str[i] >= 'a' && str[i] <= 'm')
      rot[i] = str[i]+13;
    else if(str[i] >= 'n' && str[i] <= 'z')
      rot[i] = str[i]-13;
    else if(str[i] >= 'A' && str[i] <= 'M')
      rot[i] = str[i]+13;
    else if(str[i] >= 'N' && str[i] <= 'Z')
      rot[i] = str[i]-13;
    else
      rot[i] = str[i];
  }
  for(i=0; i<n-1; i++)
	  printf("%c", rot[i]);
  return 0;
}
