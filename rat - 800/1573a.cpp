#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i;
        int cou = 0;
        int len = s.size();

        if (s[n - 1] != '0')
        {
            while (s[n - 1] != '0')
            {
                s[n - 1]--;
                cou++;
            }
        }

        for (i = 0; i < len - 1; i++)
        {

            if (s[i] != '0')
            {
                while (s[i] != '0')
                {
                    s[i]--;
                    cou++;
                }
                cou++;
            }
        }
        cout << cou << endl;
    }

    return 0;
}
