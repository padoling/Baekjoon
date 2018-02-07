#include <stdio.h>

int main()
{
  int a, b, m, i, j, k;
  int B[26];
  long long sum = 0;

  scanf("%d %d", &a, &b);
  scanf("%d", &m);
  for(i=m-1; i>=0; i--){
    scanf("%d", &k);
    for(j=0; j<i; j++) {
      k *= a;
    }
    sum += k; // A진수를 10진수로 변환
  }

  for(i=0; sum>0; i++) {
    B[i] = sum%b;
    sum /= b;
  } // 10진수를 B진수로 변환
  for(j=i-1; j>=0; j--) {
    printf("%d ", B[j]);
  }
  return 0;
}
