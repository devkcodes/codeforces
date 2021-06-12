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
        cin >> arr[i];

    if (is_sorted(arr, arr + n))
        cout << "0" << endl;

    else if (arr[0] == 1 || arr[n - 1] == n)
        cout << "1" << endl;

    else if (arr[0] == n && arr[n - 1] == 1)
        cout << "3" << endl;

    else
        cout << "2" << endl;

    return;
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