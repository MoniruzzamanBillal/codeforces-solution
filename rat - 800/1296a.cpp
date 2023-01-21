#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        int even,odd,sum;
        even=odd=sum=0;
        int i;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            sum+=a[i];
        }
        if(sum%2 != 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(even!=0 && odd !=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
