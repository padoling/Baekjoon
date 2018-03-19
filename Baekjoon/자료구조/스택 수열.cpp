#include <cstdio>
#include <stack>
using namespace std;
stack<int> stk;
int seq[100001];
char pushpop[10000000];
int main() {
  int n, k=0;
  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &seq[i]);
  }
  int temp;
  int t=0;
  for(int i=0; i<n; i++) {
    temp = seq[i];
    if(!stk.empty() && stk.top() == temp) {
      pushpop[t] = '-'; stk.pop(); t++;
    } else if(stk.empty() || stk.top() != temp) {
      if(!stk.empty() && stk.top() > temp) {
        printf("NO\n");
        return 0;
      } else {
        while(k<temp) {
          k++;
          pushpop[t] = '+'; stk.push(k); t++;
        }
        pushpop[t] = '-'; stk.pop(); t++;
      }
    }
  }
  for(int i=0; i<t; i++) {
    printf("%c\n", pushpop[i]);
  }
  return 0;
}
