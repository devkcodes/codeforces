#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define debug(x, y) cout << x << " : " << y << endl;
#define debugarr(arr, i, n) \
    for (i = 0; i < n; i++) \
        cout << arr[i] << " ";

//********MACROS********

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    map<pair<int, int>, int> mp;
    int cD = 0, cK = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
            cD++;
        else
            cK++;
        int cac = __gcd(cD, cK);

        int a = cD / cac;
        int b = cK / cac;
        cout << mp[{a, b}] + 1 << ' ';
        mp[{a, b}]++;
    }
    cout << "\n";
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