#include <stdio.h>

int GCD(int a, int b) {
  int r = a%b;
  if(a%b == 0) {
    return b;
  } else {
    GCD(b, r);
  }
}

int main()
{
  int a, b, g;

  scanf("%d %d", &a, &b);
  g = GCD(a,b);
  printf("%d\n", g);
  printf("%d\n", a*b/g);
  return 0;
}
