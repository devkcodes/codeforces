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

void solve()
{
    string s;
    cin >> s;
    ll num;
    int sz = s.size();
    int x[2] = {-1, -1};
    ll answer = 0;
    for (int i = 0; i < sz; i++)
    {
        num = s[i] - '0';
        if (num == 1 || num == 0)
            x
                [(i % 2) ^ num] = i;
        answer += i - min(x[0], x[1]);
    }
    cout << answer << endl;
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