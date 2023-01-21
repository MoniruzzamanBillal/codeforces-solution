#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,cou,len;
    len=s.size();
    cou=0;

    for(i=0; i<len; i++){
        if(s[i]==s[i+1]){
            cou++;
        }
    }
    cout<<cou<<endl;
    
    
    return 0;
}
