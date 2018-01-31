#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string ab = a + b;
	string cd = c + d;
	long long result = stoll(ab) + stoll(cd);
	cout << result << '\n';
	return 0;
}