#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  string s;
  cin >> s;
  int len = s.size();
  vector<char> a;
  vector<string> b;
  for(int i=len-1; i>=0; i--) {
    a.push_back(s[i]);
  }
  for(int i=0; i<len; i++) {
    int n = a.size();
	  string temp;
	  for(int j=n-1; j>=0; j--) {
		  temp += a[j];
	  }
	b.push_back(temp);
  a.pop_back();
  }
  sort(b.begin(), b.end());
  for(int i=0; i<len; i++) {
    cout << b[i] << "\n";
  }
  return 0;
}
