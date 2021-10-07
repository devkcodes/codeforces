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





void solve() {
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;

	int ans = 0;
	int count = 0;

	for (int i = 0; i < n ; i++)
	{
		if (s1[i] - '0' + s2[i] - '0' == 1)
		{
			ans += 2;
			count++;
		}

		else if ((s1[i] - '0' + s2[i] - '0' == 0) && (s1[i + 1] - '0' + s2[i + 1] - '0' == 2))
		{
			i++;
			ans += 2;
			count += 2;
		}

		else if ((s1[i] - '0' + s2[i] - '0' == 2) && (s1[i + 1] - '0' + s2[i + 1] - '0' == 0))
		{
			i++;
			ans += 2;
			count += 2;
		}

		else if ((s1[i] - '0' + s2[i] - '0' == 2) && (s1[i + 1] - '0' + s2[i + 1] - '0' != 0))
		{
			count++;

		}
	}

	cout << ans + n - count << endl;

	return;

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


