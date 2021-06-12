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
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    ll sum = 0;
    int potions = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        sum += a;
        pq.push(a);
        potions++;

        while (sum < 0)
        {
            sum -= pq.top();
            pq.pop();
            potions--;
        }
    }

    cout << potions << '\n';

    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}