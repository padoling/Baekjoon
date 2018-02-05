#include <stdio.h>

int GCD(int a, int b) {
  int r = a%b;
  if(r == 0) {
    return b;
  } else {
    GCD(b, r);
  }
}

int main()
{
  int t, a, b, i, g;
  int result;
  scanf("%d", &t);
  for(i=0; i<t; i++) {
    scanf("%d %d", &a, &b);
    if(a>b)
		g = GCD(a, b);
	else
		g = GCD(b, a);
	result = a*b/g;
    printf("%d\n", result);
  }
  return 0;
}
