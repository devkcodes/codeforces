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
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
  for (i = 0; i < n; i++)   \
    cout << arr[i] << " ";  \
  cout << endl;
//********MACROS********

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/

/* stuff you should look for
3 4 5 2 9
0 1 2 3 4
*/




void solve() {
	int n;
	cin >> n;
	int arr[n];
	rep(i, 0, n)
	cin >> arr[i];

	// int maxele = *max_element(arr, arr + n);
	// int minele = *min_element(arr, arr + n);

	int maxx = -1, minn = 999999999, indexmin = 0, indexmax = n;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxx)
		{
			maxx = arr[i];
			indexmax = i;
		}
		if (arr[i] < minn)
		{
			minn = arr[i];
			indexmin = i;
		}
	}
	// cout << "max ele " << maxx << " at " << indexmax << endl;
	// cout << "min ele " << minn << " at " << indexmin << endl;


	int maxind = max(indexmax, indexmin);
	int minind = min(indexmax, indexmin);

	// cout << maxind << " " << minind << endl;

	int first = maxind + 1;
	int second = n - minind;
	int third = minind + 1 + n - maxind;
	int ans = min(first, min(second, third));

	cout << ans << endl;
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
		// cout << "Case #" << t + 1 << ": ";
		solve();
	}
	cerr << "Time elapsed: " << (double)(clock() - t1) / 1000 << " s" << endl;
}


