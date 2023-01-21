#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            int mn=abs(v[0]-v[1]);
            int mx=abs(v[0]-v[n-1]);
            cout<<mn<< " "<<mx<<endl;
 
        }
        if(i>=1 && i<n-1)
        {
            int mn = min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            int mx= max(abs(v[i]-v[0]),abs(v[i]-v[n-1]));
            cout<<mn<< " "<<mx<<endl;
        }
        if(i==(n-1))
        {
            int mn= abs(v[n-1]-v[n-2]);
            int mx=abs(v[0]-v[n-1]);
            cout<<mn<< " "<<mx<<endl;
 
        }
 
    }
 
    return 0;
}
