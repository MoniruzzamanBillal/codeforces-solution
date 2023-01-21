#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
#define pb push_back
 
using namespace std;
 
khela_suru
{
    int n;
    cin>>n;
    vector<int>v;
    int i,a;
    int le,lo,re,ro,sum;
    le=lo=re=ro=sum=0;
    for(i=0; i<n*2; i++)
    {
        cin>>a;
        v.pb(a);
    }
    for(i=0 ; i<v.size(); i++)
    {
        if(i%2 == 0)
        {
            if(v[i] == 0)
            {
                le++;
            }
            else
            {
                lo++;
            }
        }
 
        else
        {
            if(v[i]== 0)
            {
                re++;
            }
 
            else
            {
                ro++;
            }
        }
    }
 
    int mn1,mn2;
    mn1=min(le,lo);
    mn2=min(re,ro);
    sum=mn1+mn2;
    cout<<sum<<endl;
 
    khela_ses;
}
