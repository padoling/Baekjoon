#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Person {
  int age;
  char name[101];
  int join;
};
bool cmp(const Person &u, const Person &v) {
  if(u.age < v.age)
    return true;
  else if(u.age == v.age)
    return u.join < v.join;
  else
    return false;
}
int main()
{
  int n;
  scanf("%d", &n);
  vector<Person> a(n);
  for(int i=0; i<n; i++) {
    scanf("%d %s", &a[i].age, &a[i].name);
    a[i].join = i;
  }
  sort(a.begin(), a.end(), cmp);
  for(int i=0; i<a.size(); i++) {
    printf("%d %s\n", a[i].age, a[i].name);
  }
  return 0;
}
