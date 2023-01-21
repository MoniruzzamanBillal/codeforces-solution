#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n][5];

    int i,j;
    int cou=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>s[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<5-1; j++)
        {
            if(s[i][j]=='O' && s[i][j+1]=='O')
            {
                s[i][j]='+';
                s[i][j+1]='+';
                cou++;
                break;
            }
        }
        if(cou>0)
        {
            break;
        }
    }

    if(cou>0)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }

    else
    {
        cout<<"NO";
    }

    return 0;
}
