#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        char a=toupper(s[0]);
        char b=toupper(s[1]);
        char c=toupper(s[2]);
        if(a=='Y' && b=='E' && c=='S')
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
