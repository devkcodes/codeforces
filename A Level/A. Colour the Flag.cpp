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




void solve() {
	int n, m;
	cin >> n >> m;
	char arr[n][m];
	rep(i, 0, n)
	rep(j, 0, m)
	cin >> arr[i][j];
	char c;
	int first;
	char color[2] = {'W', 'R'};
	int color_index = 1;
	int flag1 = true;

	rep(i, 0, n)
	{	if (flag1 == false)
			break;
		rep(j, 0, m)
		if (arr[i][j] == 'W' || arr[i][j] == 'R')
		{

			c = arr[i][j];
			int index;
			if (color[0] == c)
				index = 0;
			else index = 1;

			if ((i + j) % 2 != 0)
				c = color[1 ^ index];
			index = 1 ^ index;
			// cout << "index" << endl;
			color_index = index;
			flag1 = false;
			break;

		}
	}

	// cout << c << endl;
	bool flag = true;
	// cout << color_index << endl;

	rep(i, 0, n)
	{
		if (flag == false)
			break;
		rep(j, 0, m)
		{
			if (arr[i][j] == color[1 ^ color_index])
			{cout << "NO" << endl; return;}

			arr[i][j] = color[color_index];
			color_index = 1 ^ color_index;
		}
		if (flag == false)
			break;
		color_index = 1 ^ color_index;

	}
	int count = 0;
	rep(i, 0, n)
	{	rep(j, 0, m)
		if (arr[i][j] == '.')
		{
			count++;
		}
	}

	if (count == 0)
	{
		cout << "YES" << endl;
		rep(i, 0, n)
		{	rep(j, 0, m)
			cout << arr[i][j];
			cout << endl;
		}
		return;
	}
	else cout << "NO" << endl; return;

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


