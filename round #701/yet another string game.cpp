#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i += 2)
        {
            if (s[i] != 'a')
                s[i] = 'a';
            else
                s[i] = 'b';
        }

        for (int i = 1; i < s.length(); i += 2)
        {
            if (s[i] != 'z')
                s[i] = 'z';
            else
                s[i] = 'y';
        }

        cout << s << endl;
    }
}