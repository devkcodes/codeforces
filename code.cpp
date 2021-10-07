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
	int arr[2];
	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	int m;
	cin >> m;
	sort(arr, arr + 2);
	int a, b, c, mx;
	mx = m;

	a = arr[0];
	b = arr[1];
	c = arr[2];

	int pa = a / 2;
	int pb = b / 2;
	int pc = c / 2;
	int pairs = pa + pb + pc;

	if (pairs < m)
	{
		cout << "NO" << endl;
		return;
	}

	while (mx)
	{
		if (max(max(b, c), a) > 1)
		{	max(a, max(b, c)) - 2;
			mx--;
		}

	}

	int arr2[2];
	arr2[0] = a;
	arr2[1] = b;
	arr2[2] = c;
	sort(arr, arr + 2);

	if (arr2[2] > (arr2[1] + arr2[0]) * 2)
		cout << "NO" << endl;

	else cout << "YES" << endl;






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

	cin >> t;
	while (t--) {
		solve();
	}
	cerr << "Time elapsed: " << (double)(clock() - t1) / 1000 << " s" << endl;
}


