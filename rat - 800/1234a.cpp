#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        ll n;
        cin>>n;
        ll x=n;
        ll a;
        ll sum=0;
        while(x--)
        {
            cin>>a;
            sum+=a;

        }
        if(sum%n == 0)
        {
            sum=sum/n;
        }
        else
        {
            sum=(sum/n)+1;
        }

        cout<<sum<<endl;
    }

    return 0;
}
