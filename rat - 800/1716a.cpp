#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*  */
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int res;

        if(n==1)
        {
            cout<<2<<endl;
        }
        else if(n%3 != 0)
        {
            res=(n/3)+1;
            cout<<res<<endl;
        }

        else
        {
            res=(n/3);
            cout<<res<<endl;
        }
    }

    return 0;
}

//999998402
