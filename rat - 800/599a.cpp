#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum=0;

    if(a+b==c){
        sum=a+b+c;
    }
    else if(a+b < c){
        sum=(2*a)+(2*b);
    }
    else if(a+c < b){
        sum=(2*a)+(2*c);
    }
    else if(b+c < a){
        sum=(2*b)+(2*c);
    }
    else if(a==b==c){
        sum=3*a;
    }
    else{
        sum=a+b+c;
    }
    cout<<sum<<endl;
    return 0;
}
