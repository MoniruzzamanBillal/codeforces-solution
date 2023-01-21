#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    string s;
    cin>>s;
    int len = s.size();

    string a = "hello";
    int i,j,cou=0;
    j=0;

    for(i=0; i<len; i++)
    {
        if(s[i] == a[j])
        {
            cou++;
            j++;
        }
    }

    if(cou == 5)
    {
        cout<<"YES"<<ml;
    }
    else
    {
        cout<<"NO"<<ml;
    }

    return 0;
}

