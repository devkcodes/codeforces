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
    int count = 0;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // sort(arr, arr + n);

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    for (int i = 0; i < odd.size(); i++)
        even.push_back(odd[i]);

    for (int i = 0; i < even.size(); i++)
    {
        // cout << even[i] << " ";
        for (int j = i + 1; j < even.size(); j++)
            if (__gcd(even[i], 2 * even[j]) > 1)
                count++;
    }
    cout << count << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}