#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i,j,n;
        ll cou=0;
        cin>>n;

        for(i=1; i<=9; i++)
        {
            for(j=i; j<=n; j=(j*10)+i)
            {
                cou++;
            }
        }

        cout<<cou<<ml;
    }




    return 0;
}

