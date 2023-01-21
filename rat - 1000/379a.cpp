#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    int a,b;
    cin>>a>>b;
    int sum = a;
    int rem,res;
    while(a>=b)
    {
        res = a/b;
        sum+=res;
        rem = a%b;
        a=res+rem;
    }
    cout<<sum<<ml;



    return 0;
}

