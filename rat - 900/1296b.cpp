#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
#define ll long long int
using namespace std;
 
khela_suru
{
    int test;
    cin>>test;
    while(test--)
    {
 
 
        ll a;
        cin>>a;
        int get,res;
        get=res=0;
        ll temp;
        temp=a;
        ll ans=a;
 
        int tem;
 
        while((temp/10) > 0)
        {
            res+=(temp/10);
 
            tem=temp%10;
            temp/=10;
            temp+=tem;
        }
 
        ans+=res;
 
        cout<<ans<<endl;
 
    }
 
 
 
    khela_ses;
}
