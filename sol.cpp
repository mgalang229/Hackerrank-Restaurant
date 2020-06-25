#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int gcd(int a, int b) {
	if(b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
void decode() {
	int l, b;
	cin >> l >> b;
	cout << (l / gcd(l, b)) * (b / gcd(l, b)) << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
