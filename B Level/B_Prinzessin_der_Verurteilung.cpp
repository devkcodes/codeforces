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

string mex(string S)
{
    vector<string> strings = {""};

    while (true)
    {
        vector<string> nstrings;

        for (auto &str : strings)
            for (int c = 0; c < 26; c++)
            {
                string nstr = str + char('a' + c);
                nstrings.push_back(nstr);
                cout << nstr << " ";
                if (S.find(nstr) == string::npos)
                    return nstr;
            }

        strings.swap(nstrings);
    }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << mex(s) << endl;

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