#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
using namespace std;
 
khela_suru
{
 
    int n=12;
    int k;
    cin>>k;
    int a[n];
    int i;
    int cou=0;
    int sum=0;
 
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
 
    sort(a,a+n,greater<>());
    if(k==0)
    {
        cout<<0<<endl;
    }
 
    else
    {
        for(i=0; i<n; i++)
        {
            sum+=a[i];
            cou++;
            if(sum>=k)
            {
                break;
            }
        }
 
        cout<<(sum>=k?cou:-1)<<endl;
    }
 
    khela_ses;
}
