#include <stdio.h>

int main()
{
  int x, y, i;
  int p;
  int sum=0;
  int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

  scanf("%d %d", &x, &y);
  for(i=0; i<x-1; i++) {
    sum+=month[i];
  }
  sum+=y;
  p=sum%7;
  if(p==1)
    printf("MON");
  else if(p==2)
    printf("TUE");
  else if(p==3)
    printf("WED");
  else if(p==4)
    printf("THU");
  else if(p==5)
    printf("FRI");
  else if(p==6)
    printf("SAT");
  else
    printf("SUN");
  return 0;
}
