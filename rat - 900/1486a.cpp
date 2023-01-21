#include<bits/stdc++.h>
#define khele_suru int main(void)
#define khela_ses return 0;
#define ll long long int
using namespace std;
 
 
void cal(void)
{
    int n;
    cin>>n;
    ll a[n];
    ll holder=0;
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=i)
        {
            holder+=(a[i]-i);
        }
        else if(a[i]+holder >= i)
        {
            ll dif=i-a[i];
            holder-=dif;
        }
        else
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
 
khele_suru
{
    int test;
    cin>>test;
    while(test--)
    {
        cal();
    }
 
    khela_ses;
}
