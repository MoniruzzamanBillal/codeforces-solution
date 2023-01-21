#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* */
    int test;
    cin>>test;
    while(test--)
    {
        int n,i;
        cin>>n;
        int a[n];
        int mi=1000000;
        int cou=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mi=min(mi,a[i]);
        }

        for(i=0; i<n; i++)
        {
            if(a[i]>mi)
            {
                cou++;
            }
        }
        cout<<cou<<endl;
    }

    return 0;
}
