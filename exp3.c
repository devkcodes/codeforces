#include <stdio.h>



int main() {
	int n;
	scanf("%d", &n);

	int m;
	scanf("%d", &m);

	int x[n + m - 1], h[n + m - 1], y[m + n - 1];

	for (int i = 0; i < m + n - 1; i++)
	{
		x[i] = 0;
		h[i] = 0;
	}

	for (int i = 0; i < m; i++)
		scanf("%d", &x[i]);

	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);

	for (int i = 0; i < m + n - 1; i++)
	{
		y[i] = 0;
		for (int j = 0; j <= i; j++)
		{

			y[i] = y[i] + ( x[j] * h[i - j]);
		}
	}
	for (int i = 0; i < n + m - 1; i++)
		printf("%d ", y[i]);




	return 0;
}