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

void even(int ans[], int n, int a, int b) {

	int start = 1, end = n, i = 0, rem_i = n - 1 - i;
	int x = max(a, b);
	while (x--)
	{
		ans[i] = start;
		ans[i + 1] = end;
		start++; end--; i += 2; rem_i--;
	}
	while (rem_i--) {
		ans[i] = start;
		start++; i++;
	}

	if (a == b) {
		return;
	}


	else
	{
		if (a > b)
			swap(ans[n - 1], ans[n - 2]);
		if (a < b) swap(ans[0], ans[1]);
	}
	return;
}

void odd_a(int ans[], int n, int a, int b) {

	int start = 1, end = n, i = 0, rem_i = n - 1 - i;
	int x = a;
	while (x--)
	{
		ans[i] = start;
		ans[i + 1] = end;
		start++; end--; i += 2; rem_i--;
	}
	int m = rem_i;
	while (rem_i--) {
		ans[i] = start;
		start++; i++;
	}

	if (a == b && rem_i > 0) {
		swap(ans[0], ans[1]);
	}

	return;

}

void odd_b(int ans[], int n, int a, int b) {

	int start = n, end = 1, i = 0, rem_i = n - 1 - i;
	int x = a;
	while (x--)
	{
		ans[i] = start;
		ans[i + 1] = end;
		start--; end++; i += 2; rem_i--;
	}
	while (rem_i--) {
		ans[i] = start;
		start--; i++;
	}

	return;

}



void solve() {

	int arr[7];
	for (int i = 0; i < 7; i++)
		cin >> arr[i];

	sort(arr, arr + 7);

	cout << arr[0] << " " << arr[1] << " " << arr[6] - (arr[0] + arr[1] ) << endl;
}

int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	t = 1;
	cin >> t;
	while (t--) {
		//cout << "Case #" << t + 1 << ": "; --> -->
		solve();
	}
}


