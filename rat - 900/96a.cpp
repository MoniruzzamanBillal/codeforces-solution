#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int len = s.size();
    int sum = 1;
    int i;

    for (i = 0; i < len - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            sum++;

            if (sum == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }

        else
        {
            sum = 1;
        }
    }

    cout << "NO" << endl;
    return 0;
}
