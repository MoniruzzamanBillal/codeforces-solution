#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{

    ll n;
    cin>>n;
    ll a[n];
    int i;
    ll mx = INT_MAX;
    ll ind = -5;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(mx>a[i])
        {
            mx = a[i];
            ind = i;
        }
    }
    ind +=1;

    sort(a,a+n);

    if(a[0] == a[1])
    {
        cout<<"Still Rozdil"<<ml;
    }
    else{
        cout<<ind<<ml;
    }


    return 0;
}

