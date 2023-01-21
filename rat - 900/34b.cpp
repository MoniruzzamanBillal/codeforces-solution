#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
using namespace std;
khela_suru
{
    int n,m;
    int sum=0,i;
    int cou=0;
    cin>>n>>m;
    int a[n];
 
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
 
    for(i=0; i<m; i++){
 
        if(a[i]<0){
           sum+=a[i];
        }
    }
 
 
 
    cout<<-sum<<endl;
 
    khela_ses;
}
