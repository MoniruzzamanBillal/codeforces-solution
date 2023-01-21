#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s,a,b,sum;
    int cou=0;

    cin>>a>>b>>s;
    sum=a+b;
    sort(sum.begin(),sum.end());
    sort(s.begin(),s.end());
    int i,mx;

    mx=max(s.size(),sum.size());

    for(i=0; i<mx; i++){
        if(sum[i]==s[i]){
            continue;
        }
        else{
            cou++;
            break;
        }
    }

    cout<<((cou==0)?("YES"):("NO"));
    
    
    return 0;
}
