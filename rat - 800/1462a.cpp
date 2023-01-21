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
        int i,j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        i=0;
        j=n-1;
        if(n%2 == 0)
        {
            while(i<j)
            {
                cout<<a[i]<<" "<<a[j]<<" ";
                i++;
                j--;
            }
            cout<<endl;
        }
        else
        {
            while(i<=j)
            {
                if(i==j)
                {
                    cout<<a[i];
                }
                else
                {
                    cout<<a[i]<<" "<<a[j]<<" ";
                }
                i++;
                j--;
            }
            cout<<endl;
        }
    }
 
    return 0;
}
