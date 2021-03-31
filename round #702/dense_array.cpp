#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] > arr[i] * 2)
            {
                int i = arr[i + 1];
                int j = arr[i];
                while (i > j)
                {
                    j *= 2;
                    answer++;
                }
            }
        }
        cout << answer << endl;
    }
}
