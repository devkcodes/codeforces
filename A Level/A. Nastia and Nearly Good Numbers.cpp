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
#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
   for (i = 0; i < n; i++)   \
     cout << arr[i] << " ";  \
   cout << endl;
//********MACROS********




void solve() {
	ll a, b;
	cin >> a >> b;
	if (b == 1)
	{
		cout << "NO" << endl;
		return ;
	}

	cout << "YES" << endl;
	cout << a*b << " " << a << " " << a*b + a << endl;

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


