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
    int len = s.length();
    int i,j;
    bool has = true;
    for(i=0; i<len; i++)
    {
         if(s[i] == 'n' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        {
            continue;
        }
        else if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u' || s[i] != 'n' )
        {
            if(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u')
            {
                i++;
            }
            else{
                has = false;
                break;
            }
        }
    }
 
    if(has)
    {
        cout<<"YES"<<ml;
    }
    else{
        cout<<"NO"<<ml;
    }
    return 0;
}
