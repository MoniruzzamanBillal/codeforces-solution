#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4,a;
    int i;
    set<int>s;

    for(i=1; i<=n; i++){
        cin>>a;
        s.insert(a);
    }
    cout<<(n-s.size());
    return 0;
}
