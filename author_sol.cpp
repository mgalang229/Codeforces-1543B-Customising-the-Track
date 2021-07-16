#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			// compute for the sum of all values
			sum += a;
		}
		// calculate the remainder of 'sum' and 'n' to get the number of elements that
		// will be equal to (p + 1) (distributing the remainder to it) and the 
		// other ('n' - 'x') elements equal to p (NOT distributing the remainder to it)
		long long x = sum % n;
		// compute for the product of 'x' (p + 1 elements) and ('n' - 'x') ('p' elements)
		long long ans = x * (n - x);
		cout << ans << '\n';
	}
	return 0;
}
