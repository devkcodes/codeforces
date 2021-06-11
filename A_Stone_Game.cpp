#include <bits/stdc++.h>

using namespace std;

//********MACROS********

void solve()
{
    int n;
    cin >> n;
    int arr[n], arraytwo[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
        arraytwo[i] = input;
    }
    sort(arraytwo, arraytwo + n);
    int maximumm = arraytwo[n - 1];
    int minimumm = arraytwo[0];

    int indmin, indmax;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maximumm)
            indmax = i;

        if (arr[i] == minimumm)
            indmin = i;
    }

    int high, low;
    if (indmax > indmin)
    {
        high = indmax;
        low = indmin;
    }
    else
    {
        high = indmin;
        low = indmax;
    }

    // cout << low << " " << n - low << " " << low + (n - high) << endl;
    int sol = min(high, min(n - low - 1, low + (n - high)));

    cout << sol + 1;
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