#include <bits/stdc++.h>
using namespace std;

void simpleswap(int arr, int n, int k)
{
	int x = (n - k) / 2;
	for (int i = n - 1; i >= 0; i = i - 2)
	{
		if (x < 0)
			break;
		else {
			swap(arr[i], arr[i - 1]);
			x--;
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}


void solve() {

	int n, k;
	cin >> n >> k;


	//k is good, p is bad
	int p = n - k;
	vector<int> a(n), b;
	for (int i = 1; i < n + 1; ++i)
	{
		a[i - 1] = i;
	} b = a;

	if (p % 2 == 0) {
		for (int i = n - 1; i > 0; i -= 2) {
			if (p <= 0) break;
			swap(a[i], a[i - 1]);
			p -= 2;
		}
	}
	else {
		p--;
		for (int i = n - 1; i > 0; i -= 2) {
			if (p <= 0) break;
			swap(a[i], a[i - 1]);
			p -= 2;
		}
		if (n > 1)
			swap(a[0], a[1]);


	}

	cout << a << nline;
	//cout << b << nline;
}
int main() {
	int n;
	cin >> n;
	while (n--)
		solve();

	return 0;
}




