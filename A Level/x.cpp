#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, l, r, k;
		cin >> n >> l >> r >> k;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		sort(arr, arr + n);

		int count = 0; int start;
		for (int i = 0; i < n; i++) {
			if (arr[i] >= l)
				start = i;

		}

		int sum = 0;
		while (sum <= k && start <= r) {
			sum += start;
			count++;
			start++;
		}

		cout << count << endl;

	}
	return 0;
}