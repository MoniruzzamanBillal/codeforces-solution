#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        int i,j;
        int cou=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(j==m-1 && a[i][j]!='D' && a[i][j]!='C')
                {
                    cou++;
                }
                if(i==n-1 && a[i][j]!='R' && a[i][j]!='C')
                {
                    cou++;
                }
            }
        }
        cout<<cou<<endl;
    }
 
    return 0;
}
