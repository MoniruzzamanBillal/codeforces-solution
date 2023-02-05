#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

ll findans(int n, int m)
{
    ll res,cou=0;

    if(n == m)
    {
        return 0;
    }

    else if(m % n != 0)
    {
        return -1;
    }
    else
    {
        res = m/n;
        while(res %2 == 0)
        {
            cou++;
            res /= 2;
        }
        while(res %3 == 0)
        {
            cou++;
            res /=3 ;
        }

        if(res != 1)
        {
            return -1;

        }
        else
        {
            return cou;
        }
    }
}

int main()
{
    ll n, m;
    cin>>n>>m;

    ll ans = findans(n,m);

    cout<<ans<<endl;

    return 0;
}

