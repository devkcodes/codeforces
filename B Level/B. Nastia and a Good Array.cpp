#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
// Policy based data structure
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define ll long long int
#define yes cout<<"YES"<<endl; return;
#define no cout<<"NO"<<endl; return;
#define inf 1e18
#define mod 1000000007
#define minpq priority_queue <ll, vector<ll>, greater<ll>>
#define maxpq priority_queue<ll>
#define rep(i, k, n) for (int i = k; i < n; ++i)
#define repr(i, k, n) for (int i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//**********************
//**********************
//********MACROS********
//**********************
//**********************




void solve() {
	int n;
	cin >> n;
	ll arr[n];
	rep(i, 0, n)
	cin >> arr[i];
	ll x = *min_element (arr, arr + n);

	int pos;
	rep(i, 0, n)
	if (arr[i] == x)
	{
		pos = i;
		break;
	}
	int beg = 0;
	int steps = 0;
	if (pos % 2 == 0)
	{
		beg = 1;
		steps = n / 2;
	}
	else {
		beg = 0;
		steps = (n + 1) / 2;
	}
	ll r = 1000000007;


	cout << steps << endl;
	rep(i, 0, steps)
	{
		cout << pos + 1 << " " << beg + 1 << " " << arr[pos] << " " << r << endl;
		beg += 2;
	}



}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	clock_t t1 = clock();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	t = 1;
	cin >> t;
	while (t--) {
		// cout << "Case #" << t + 1 << ": ";
		solve();
	}
	cerr << "Time elapsed: " << (double)(clock() - t1) / 1000 << " s" << endl;
}


