#include <stdio.h>

int main(void)
{
  int A, B;
  int T;
  scanf("%d", &T);
  while(T--){
    scanf("%d %d", &A, &B);
    printf("%d\n", A+B);
  }
  return 0;
}
