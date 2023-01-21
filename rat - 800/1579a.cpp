#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* */
    int test;
    cin>>test;
    while(test--)
    {



        string s;
        cin>>s;
        int a,b;
        a=b=0;
        int i,len;
        len=s.size();

        for(i=0; i<len; i++)
        {
            if(s[i]=='B')
            {
                b++;
            }
            else
            {
                a++;
            }
        }

        if(b==a)
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
