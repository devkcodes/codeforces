#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve()
{
    int n;
    cin >> n;
    int input;
    vector<int> arr;
    bool end = false;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input < 0)
            end = true;
        arr.push_back(input);
    }
    if (end)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        cout << "101" << endl;
        for (int i = 0; i < 101; i++)
            cout << i << " ";
        cout << endl;
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}