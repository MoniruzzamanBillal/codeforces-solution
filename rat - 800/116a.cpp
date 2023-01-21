#include<bits/stdc++.h>
#define pb push_back
using namespace std;
 
int main()
{
    int i,a,b,n,sum=0;
 
    cin>>n;
    vector<int>v;
 
    for(i=0; i<n; i++){
        cin>>a>>b;
        sum+=(b-a);
        v.pb(sum);
    }
 
    sort(v.rbegin(), v.rend());
    cout<<v[0]<<endl;
 
 
 
    return 0;
}
