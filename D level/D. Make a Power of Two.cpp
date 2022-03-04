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
//********MACROS********

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing && stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/





void solve()
{
	ll n; cin >> n;
	if ((n & (n - 1)) == 0) {
		cout << 0 << endl; return;
	}
	vector<ll> v; ll o = 1;
	for (ll i = 0; i <= 60; i++) {
		ll c = (o << i); v.push_back(c);
	}
	string s = to_string(n);
	ll ans = 1e9; ll a = s.size();
	for (auto x : v) {
		string t = to_string(x);
		ll b = t.size(); ll res = 0;
		ll i = 0, j = 0;
		while (i < a && j < b)
		{
			if (s[i] == t[j])
			{
				i++, j++;
			}
			else {
				res++;
				i++;
			}
		}
		if (i == a && j != b) res += b - j;

		else if (i != a && j == b) res += a - i;

		ans = min(ans, res);
	}
	cout << ans << endl;
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
		solve();
	}
	cerr << "Time elapsed: " << (double)(clock() - t1) / 1000 << " s" << endl;
}


