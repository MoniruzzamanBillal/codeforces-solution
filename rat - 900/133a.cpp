#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
 
    int len,i,t=0;
    len=s.size();
 
    for(i=0 ;i<len; i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            t++;
            break;
        }
 
    }
 
    cout<<((t>0)?("YES"):("NO"))<<endl;
 
 
 
 
 
    return 0;
}
