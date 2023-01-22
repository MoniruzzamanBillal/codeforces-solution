#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{

    ll a,b,div;

    cin>>a>>b;

    div = a/2;

    if(b>a)
    {
        cout<<"-1"<<ml;
        return 0;
    }

    if(a%2 != 0)
    {
        div++;
    }

    while(div%b != 0)
    {
        div++;
    }

    cout<<div<<ml;

    return 0;
}

