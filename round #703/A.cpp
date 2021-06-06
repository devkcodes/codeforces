#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;

        bool flag = false;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n + 1; i++)
        {
            sum += arr[i];
            long long req = i * (i + 1);
            if (sum < req / 2)
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "YES" << endl;
    }
    return 0;
}