#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void show()
{
    ll n,k,sum,i,j;
    sum=0;
    cin>>n>>k;
    ll cou;
    if(n%2 == 0)
    {
        cout<<(n+(2*k))<<endl;
    }
    else if(n%2 != 0)
    {
        for(i=2; i<=n; i++)
        {
            if(n%i == 0)
            {
                cou=i;
                break;
            }
        }
        cout<<n+cou+(2*(k-1))<<endl;
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        show();
    }
    return 0;
}
