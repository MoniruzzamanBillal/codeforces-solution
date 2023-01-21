#include <bits/stdc++.h>
using namespace std;

void cal()
{
    int a, b, c;

    cin>>a>>b>>c;

    if((2*b-a)%c == 0 && (2*b-a)>0 ){
        cout<<"YES"<<endl;
    }

    else if((2*b-c)%a == 0 && (2*b-c)>0){
        cout<<"YES"<<endl;
    }

    else if((c+a)%(2*b) == 0){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }

}

int main()
{
    int test;
    cin>>test;

    while(test--){
        cal();
    }

    return 0;
}
