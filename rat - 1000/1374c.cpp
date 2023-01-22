#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll i,j;
        cin>>n;
        string s;
        cin>>s;
        ll cou, ans;
        cou = ans = 0;
        for(i=0; i<n; i++)
        {
            if(s[i] == '(')
            {
                cou++;
            }
            else
            {
                cou--;
                if(cou<0)
                {
                    ans++;
                    cou = 0;
                }
            }
        }
        cout<<ans<<ml;
    }

    return 0;
}

