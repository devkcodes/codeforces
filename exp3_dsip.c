#include <stdio.h>
#include<iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int x[n], h[n], y[n];

	for (int i = 0; i < n; i++)
		cin >> x[i];

	for (int i = 0; i < n; i++)
		cin >> h[i];

	for (int i = 0; i < m + n - 1; i++)
	{
		y[i] = 0;
		for (j = 0; j < n + m - 1; i++)
		{
			y[i] += x[j] + h[i - j];
		}
	}

	cout << y[n] << endl;

	return 0;
}