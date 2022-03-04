void solve()
{
	ll n, m;
	cin >> n >> m;

	ll hello = 1, hours = 0;
	while (hello <= m && hello < n) {
		hello *= 2;
		;
		hours++;
	}




	if (hello < n) {
		hours += ((n - hello) + (m - 1)) / m;
	}

	cout << hours << nline;
}