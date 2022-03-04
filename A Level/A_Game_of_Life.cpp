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
    int n, m;
    string s;
    cin >> n >> m >> s;
    s = "0" + s + "0";
    string p = s;
    while (m--)
    {
        for (int i = 1; i <= n; i++)
        {
            if (p[i - 1] + p[i + 1] == 97)
                s[i] = '1';
        }
        if (s == p)
            break;
        p = s;
    }
    for (int i = 1; i <= n; i++)
        cout << s[i];
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
        // cout << "Case #" << t << ": ";
        solve();
    }
}