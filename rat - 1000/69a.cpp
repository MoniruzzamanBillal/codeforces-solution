#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int s1,s2,s3;
    s1=s2=s3=0;

    while(n--){
        cin>>a>>b>>c;

        s1+=a;
        s2+=b;
        s3+=c;
    }

    cout<<(s1==0 && s2==0 && s3==0?"YES":"NO")<<endl;


    return 0;
}
