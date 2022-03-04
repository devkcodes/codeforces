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
	int a, b;
	cin >> a >> b;

	int XOR;
	if (a % 4 == 1) {XOR = a - 1;}
	else if (a % 4 == 2) {XOR = 1;}
	else if (a % 4 == 3) {XOR = a;}
	else {XOR = 0;}

	if (XOR == b)
		cout << a << endl;
	else if ((XOR ^ b) != a)
		cout << a + 1 << endl;


	else cout << a + 2 << endl;

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


