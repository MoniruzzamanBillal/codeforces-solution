#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int a[n];
    int i;
    int sum=0;
    int rem=0;
    for(i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a,a+n);

    for(i=0 ; i<n-1; i++){

        if(i+1<n && a[i] == a[i+1]){
            rem=max(rem, 2*a[i]);
        }

        if(i+2<n && a[i] == a[i+2]){
            rem=max(rem, 3*a[i]);
        }

    }

    cout<<sum-rem<<endl;


    return 0;
}
