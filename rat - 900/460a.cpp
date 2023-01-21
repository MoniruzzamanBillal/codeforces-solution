#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    int i;
    for(i=1; i<=n;i++) if(i%m == 0) n++;
    cout<<n;
 
    return 0;
}
