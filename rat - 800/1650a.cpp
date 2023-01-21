#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        int len=s.size();
        bool flag=false;
        for(int i=0; i<len; i+=2)
        {

            if(s[i]==c && i%2==0)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}
