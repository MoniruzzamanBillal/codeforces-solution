#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int sum;

        if(a==0 || a==0 && b==0)
        {
            cout<<1<<endl;
        }
        else
        {
            sum=a+(2*b);
            cout<<sum+1<<endl;
        }
    }

    return 0;
}
