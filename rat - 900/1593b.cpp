#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define pb push_back
#define pp pop_back

int solve(string s, string c)
{
    int length = s.length();
    int cou = 0;
    while(s.length()>0 && c.length()>0)
    {
        if(s.back() == c.back())
        {
            s.pp();
            c.pp();
        }
        else
        {
            s.pp();
            cou++;
        }
    }
    if(c.length() == 0)
    {
        return cou;
    }
    else
    {
        return length;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int mini1,mini2,mini;
        int m0,m2,m5,m7;
        if(s.length() == 2)
        {
            cout<<"0"<<endl;
        }
        else
        {
            m0 = solve(s,"00");
            m2 = solve(s,"25");
            m5 = solve(s,"50");
            m7 = solve(s,"75");
            mini1 = min(m0,m2);
            mini2 = min(m5,m7);
            mini = min(mini1,mini2);
            cout<<mini<<endl;
        }
    }

    return 0;
}
