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
    sum += k; // A������ 10������ ��ȯ
  }

  for(i=0; sum>0; i++) {
    B[i] = sum%b;
    sum /= b;
  } // 10������ B������ ��ȯ
  for(j=i-1; j>=0; j--) {
    printf("%d ", B[j]);
  }
  return 0;
}
