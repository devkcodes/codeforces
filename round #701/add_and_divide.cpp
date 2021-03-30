#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, ans = 10000000000, count;
        cin >> a >> b;
        for (long long int i = 0; i * i <= a; i++)
        {
            if (b == 1 && i == 0)
                continue;
            long long int count = i;

            long long int c = a;
            //count=0;
            while (c)
            {
                c /= (b + i);
                count++;
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}
