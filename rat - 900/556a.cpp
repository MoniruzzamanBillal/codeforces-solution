#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0
using namespace std;
 
khela_suru
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one,zero;
    int sub,i;
    one=zero=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    sub=min(zero,one);
    cout<<n-2*sub<<endl;
 
    khela_ses;
}
