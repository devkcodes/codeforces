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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int answer = 0;
    int same = 1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == arr[i - 1])
            same++;

        else
        {
            answer += same;
            same = 1;
        }
    }
    cout << answer << endl;
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