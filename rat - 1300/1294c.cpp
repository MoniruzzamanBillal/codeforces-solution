#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void show()
{
    int n, i, j;
    cin >> n;
    int cou = 0;

    vector<int> v;

    for (i = 2; i * i < n; i++)
    {

        if (n % i == 0)
        {
            cou++;
            v.pb(i);
            n = n / i;
        }

        if (cou == 2)
        {
            v.pb(n);
            break;
        }
    }

    if(cou != 2){
        cout<<"NO"<<endl;
    }

    else{
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    }

    
}

int main()
{

    int test;
    cin>>test;
    while(test--){
    show();
    }

    return 0;
}
