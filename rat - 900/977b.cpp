
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cou, res;
    cin >> n;
    string s;
    cin >> s;

    cou = res = 0;
    string ans;

    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        cou = 0;
        for (j = 0; j < n - 1; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])
            {
                cou++;
            }

            if (res < cou)
            {
                res = cou;
                ans = string(1, s[i]) + string(1, s[i + 1]);
            }
        }
    }

    cout << ans << endl;

    return 0;
}
