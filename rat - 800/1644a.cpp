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
        int r,g,b;
        r=g=b=0;
        int i;
        int cou=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='r')
            {
                r++;
            }
            else if(s[i]=='g')
            {
                g++;
            }
            else if(s[i]=='b')
            {
                b++;
            }
            else if(s[i]=='R' && r>0)
            {
                continue;
            }
            else if(s[i]=='G' && g>0)
            {
                continue;
            }
            else if(s[i]=='B' && b>0)
            {
                continue;
            }
            else
            {
                cou++;
                break;
            }
        }
        if(cou>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
