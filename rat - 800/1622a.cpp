#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==(b+c))
        {
            cout<<"YES"<<endl;
        }
        else if(b==(a+c))
        {
            cout<<"YES"<<endl;
        }
        else if(c==(a+b))
        {
            cout<<"YES"<<endl;
        }
        else if(a==b && c%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else if(a==c && b%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else if(c==b && a%2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
