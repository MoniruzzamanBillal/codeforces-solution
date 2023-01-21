#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        int i,j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        int ram=k;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ram>=a[j])
                {
                    ram+=b[j];
                    a[j]=100000;
                    break;
                }
            }
        }

        cout<<ram<<endl;

    }



    return 0;
}
