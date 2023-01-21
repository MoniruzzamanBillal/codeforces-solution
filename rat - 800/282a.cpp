#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        if(s[0]=='+' && s[1]=='+' && s[2]=='X')
        {
            x++;
        }
        else if(s[0]=='X' && s[1]=='+' && s[2]=='+')
        {
            x++;
        }
        else if(s[0]=='-' && s[1]=='-' && s[2]=='X')
        {
            x--;
        }
        else if(s[0]=='X' && s[1]=='-' && s[2]=='-')
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
