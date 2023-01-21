#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        ll n;
        cin>>n;
        ll temp;
        temp=n;

        int cou=0;
        while(temp != 0)
        {
            cou++;
            temp/=10;
        }
        cou--;

        ll res;
        res=n-(pow(10,cou));
        cout<<res<<endl;

    }


    return 0;
}
