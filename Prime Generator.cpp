#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define inf 1e9+7

using namespace std;

void solve() {

	ll low, high, isPrime;
	cin >> low >> high;

	for (int i = low; i <= high; ++i) {

		isPrime = 0;

		for (int j = 2; j <= sqrt(i); j++) {

			if ( i % j == 0 )
			{
				isPrime = 1;
				break;
			}
		}

		if (isPrime == 0 && i != 1) cout << i << '\n';
	}

	cout << '\n';

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int tests;
	cin >> tests;
	while (tests--) {
		solve();
	}
}
