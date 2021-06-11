#include <bits/stdc++.h>
using namespace std;
//********MACROS********
#define endl "\n"
#define MOD = 1000000007

#define rep(i, k, n) for (i = k; i < n; ++i)
#define repr(i, k, n) for (i = n; i >= k; i--)
#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n)    \
    for (i = 0; i < n; i++)    \
        cout << arr[i] << " "; \
    cout << endl;
//********MACROS********

void solve()
{
    int n, i;
    cin >> n;
    vector<int> arr(n);
    int x = 0;
    rep(i, 0, n)

    {
        cin >> arr[i];
        x += arr[i];
    }
    if (x % n)
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 1)
    {

        cout << 0 << endl;
        return;
    }
    x = x / n;
    int k = 0;
    rep(i, 0, n)
    {
        if (arr[i] > x)
            k++;
    }
    cout << k << endl;
}

int main()
{
    int txxx;
    cin >> txxx;
    while (txxx--)
    {
        solve();
    }
    return 0;
}