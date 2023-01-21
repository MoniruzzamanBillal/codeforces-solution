#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
    int i;
    int cou=0;

    while(t--)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                cou++;
            }

            if(cou>0)
            {
                i++;
                cou=0;
            }
        }
    }
    cout<<s;


    return 0;
}
