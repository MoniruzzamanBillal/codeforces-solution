#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
using namespace std;
 
khela_suru
{
    int n;
    cin>>n;
 
    int a[n];
    int e,o;
    e=o=0;
    int i;
 
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2 == 0){
            e++;
        }
        else{
            o++;
        }
    }
 
    if(e>o){
        for(i=0; i<n; i++){
            if(a[i]%2 != 0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
 
    else{
        for(i=0; i<n; i++){
            if(a[i]%2 == 0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
 
 
 
 
 
    khela_ses;
}
