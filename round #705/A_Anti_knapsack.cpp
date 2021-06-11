#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve()
{
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> res;
    int counter;
    if (k % 2 != 0)
        counter = k / 2 + 1;
    else
        counter = k / 2;

    for (int i = counter; i <= n; i++)
    {
        if (i != k)
        {
            // cout << n << " " << k << " " << counter;
            count++;
        }
    }

    cout << count << endl;
    if (count)
    {
        for (int i = counter; i <= n; i++)
        {
            if (i != k)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
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