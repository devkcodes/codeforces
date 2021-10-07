#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        vector<int> b(n);
        for (auto &i : b)
            cin >> i;
        int j = 1;
        unordered_map<int, int> index;
        for (int i = 0; i < n; i++)
        {
            while (j < b[i])
            {
                index[j] = i;
                j += 2;
            }
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, i + index[a[i]]);
        }
        cout << ans << "\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}