#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int test;
    cin>>test;
    while(test--)
    {
        int m,n;
        cin>>m>>n;
        int mul=m*n;
 
        if(mul%2 == 0)
        {
            cout<<mul/2<<endl;
        }
        else
        {
            cout<<(mul/2)+1<<endl;
        }
 
    }
 
    return 0;
}
