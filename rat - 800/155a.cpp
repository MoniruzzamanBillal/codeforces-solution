#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
#define pb push_back
 
using namespace std;
 
khela_suru
{
    int n,i;
    cin>>n;
    int a,cou=0;
    int best,worst;
    cin>>best;
    worst=best;
 
    while(--n){
        cin>>a;
 
        if(a<worst){
            worst=a;
            cou++;
        }
        else if(a>best){
            best=a;
            cou++;
        }
    }
 
    cout<<cou<<endl;
 
 
    khela_ses;
}
