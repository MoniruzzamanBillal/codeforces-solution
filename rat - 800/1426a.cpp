#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,x,k,p;
 
    cin>>t;
 
    while(t--)
    {
 
        cin>>x>>k;
 
        if(x<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            x=x-2;
            if(x%k==0) p=x/k;
            else p=x/k+1;
            cout<<p+1<<endl;
        }
    }
    return 0;
}
