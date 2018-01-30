#include <stdio.h>

int main()
{
  int N,i;
  int num;
  int min=1000000;
  int max=-1000000;
  scanf("%d", &N);
  for(i=0; i<N; i++) {
    scanf("%d", &num);
    if(num<min)
      min=num;
    if(num>max)
      max=num;
  }
  printf("%d %d", min, max);
  return 0;
}
