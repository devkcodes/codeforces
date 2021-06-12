#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n)    \
    for (i = 0; i < n; i++)    \
        cout << arr[i] << " "; \
    cout << endl;
//********MACROS********

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tot = n * 3;
    cout << tot << endl;
    for (int i = 0; i < n; i += 2)
    {
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 1 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 2 << " " << i + 1 << " " << i + 2 << endl;
        cout << 1 << " " << i + 1 << " " << i + 2 << endl;
    }
    // cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}