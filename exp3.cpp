#include <stdio.h>
#include<iostream>

using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int x[n], h[n], y[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &x[i]);

	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);

	for (int i = 0; i < n + n - 1; i++)
	{
		y[i] = 0;
		for (int j = 0; j < n + n - 1; i++)
		{
			y[i] += x[j] + h[i - j];
		}
	}

	cout << y[n] << endl;

	return 0;
}