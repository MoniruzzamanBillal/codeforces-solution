#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cou,a,b;
    cou=a=b=0;

    int i;

    for(i=0; i<n; i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            cou++;
        }
        if(i<(n/2))
        {
            a+=s[i]-'0';
        }
        else
        {
            b+=s[i]-'0';
        }

    }
    if(cou==n && a==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
