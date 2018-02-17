#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Score {
  string name;
  int kor, eng, mth;
};
bool cmp(const Score &u, const Score &v) {
  if(u.kor > v.kor) {
    return true;
  } else if(u.kor == v.kor) {
    if(u.eng < v.eng) {
      return true;
    } else if(u.eng == v.eng) {
      if(u.mth > v.mth) {
        return true;
      } else if(u.mth == v.mth) {
        return u.name < v.name;
      }
    }
  }
  return false;
}
int main()
{
  int n;
  cin >> n;
  vector <Score> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i].name >> a[i].kor >> a[i].eng >> a[i].mth;
  }
  sort(a.begin(), a.end(), cmp);
  for(int i=0; i<n; i++) {
    cout << a[i].name << '\n';
  }
  return 0;
}
