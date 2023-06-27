#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	string s1, s2;
	cin >> s1 >> s2;
	int pos = 0;
	for (int i = 0; i < 10; i++) {
		if (pos == 10) break;
		pos = 5;
		string checker = s1.substr(i, pos);
		if (checker == s2)
		{
			cout << '1' << '\n';
			return;
		}
		pos++;
	}
	cout << '0' << '\n';


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	// int tests;
	// cin >> tests;
	// while (tests--) {
	solve();
	// }
}
