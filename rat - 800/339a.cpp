#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int i;
    string ne;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ne += s[i];
        }
    }
    int len = ne.size();

    sort(ne.begin(), ne.end());

    for (i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << ne[i];
        }
        else
        {
            cout << ne[i] << "+";
        }
    }

    return 0;
}
