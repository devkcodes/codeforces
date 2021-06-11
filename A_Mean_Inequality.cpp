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
    int arr[2 * n];
    int k = 2 * n - 1;
    int h = 0;
    for (int i = 0; i < 2 * n; i++)
        cin >> arr[i];
    sort(arr, arr + 2 * n);
    int res[2 * n];
    for (int i = 0; i < 2 * n; i += 2)
    {
        res[i] = arr[k];
        k--;
    }

    for (int i = 1; i < 2 * n; i += 2)
    {
        res[i] = arr[h];
        h++;
    }

    for (int i = 0; i < 2 * k; i++)

        cout << res[i] << " ";
    cout << endl;
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