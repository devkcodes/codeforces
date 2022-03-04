#include <bits/stdc++.h>

using namespace std;

#define ar array
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
int setBitNumber(int n)
{
    if (n == 0)
        return 0;

    int msb = 0;
    n = n / 2;
    while (n != 0)
    {
        n = n / 2;
        msb++;
    }

    return (1 << msb);
}
void solve()
{
    int n;
    cin >> n;
    int val = log2(setBitNumber(n));
    int ans = 0;
    for (int i = 0; i < val; i++)
        ans += pow(2, i);
    cout << ans << endl;

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