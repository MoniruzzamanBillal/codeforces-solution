#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int a1,a2,a3,a4;
    int ans;

    a1 = (a+b)*c;
    a2 = a*(b+c);
    a3 = a*b*c;
    a4 = a+b+c;

    int mx1,mx2;
    mx1= max(a1,a2);
    mx2 = max(a3,a4);
    ans = max(mx1,mx2);

    cout<<ans<<ml;


    return 0;
}

