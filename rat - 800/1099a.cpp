#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int c,d;
    int e,f;

    int i;
    cin>>a>>b>>c>>d>>e>>f;

    for(i=b; i>=1; i--){
        a+=i;

        if(i==d){
            a-=c;
            a=a<0?0:a;
        }

        if(i==f){
            a-=e;
            a=a<0?0:a;
        }

    }
    cout<<a;

    return 0;
}
