#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        string s;
        cin>>a>>b;
        cin>>s;
        int a1,b1;
        a1=b1=0;
        int i,u,d,r,l;
        u=d=r=l=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='U')
            {
                u++;
            }
            else if(s[i]=='D')
            {
                d++;
            }
            else if(s[i]=='R')
            {
                r++;
            }
            else
            {
                l++;
            }
        }
        if(a==0){
            a1++;
        }
        else if(a>0)
        {
            if(r>=a)
            {
                a1++;
            }
        }
        else if(a<0)
        {
            if(l>=abs(a))
            {
                a1++;
            }
        }
        if(b==0){
            b1++;
        }
        else if(b>0)
        {
            if(u>=b)
            {
                b1++;
            }
        }
        else if(b<0)
        {
            if(d>=abs(b))
            {
                b1++;
            }
        }
 
        cout<<((a1>0 && b1>0)?"YES":"NO")<<endl;
    }
 
 
    return 0;
}
