#include<bits/stdc++.h>
#define khela_suru int main(void)
#define khela_ses return 0;
using namespace std;
 
khela_suru
{
    string s;
    cin>>s;
    int cou=0;
 
    int len=s.size();
    int i;
    for(i=0; i<len; i++)
    {
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
        {
            i+=2;
        }
        else if(s[i]=='1' && s[i+1]=='4')
        {
            i++;
        }
        else if(s[i]=='1')
        {
            continue;
        }
        else
        {
            cou=1;
            break;
        }
    }
    cout<<((cou==0)?"YES":"NO")<<endl;
 
    khela_ses
}
