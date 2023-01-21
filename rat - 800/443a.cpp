#include <bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
using namespace std;
 
khela_suru
{
    string s;
    getline(cin, s);
    int len = s.size();
    int cou = 0;
 
    sort(s.begin(), s.end());
    int i;
    for (i = 0; i < len - 1; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] != s[i + 1])
            {
                cou++;
            }
        }
    }
 
    cout << cou << endl;
 
    khela_ses;
}
