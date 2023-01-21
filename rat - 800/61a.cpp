#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    string s;
    int len = s1.size();
    int i;
    for (i = 0; i < len; i++)
    {
        if (s1[i] == '1' && s2[i] == '1')
        {
            s += '0';
        }
        else if (s1[i] == '1' && s2[i] == '0' || s1[i] == '0' && s2[i] == '1')
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    cout << s << endl;
    return 0;
}
