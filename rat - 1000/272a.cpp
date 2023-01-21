#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a,pos;
    int sum=0;
    int cou=0;
    for(i=0; i<n; i++){
        cin>>a;

        sum+=a;
    }
    pos=((sum)%(n+1));
    for(i=1; i<=5; i++){
        pos++;
        if(pos>n+1){
            pos=1;
        }
        else if(pos !=1){
            cou++;
        }
    }
    cout<<cou<<endl;    
    return 0;
}
