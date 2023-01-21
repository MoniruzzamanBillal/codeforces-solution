#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    int sum=0;
    int res;
    int i;

    for(i=0; i<n; i++){
        if(a[i]>b[i]){
            res=a[i]-b[i];
        }
        else{
            res=b[i]-a[i];
        }
        if(res>5){
            res=10-res;
        }
        sum+=res;

    }

    cout<<sum;


    return 0;
}
