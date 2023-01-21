#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i;

        for(i=0; i<n; i++)
        {
            if(s[i]=='U')
            {
                s[i]='D';
            }

            else if(s[i]=='D')
            {
                s[i]='U';
            }
        }

        cout<<s<<endl;

    }

    return 0;
}
