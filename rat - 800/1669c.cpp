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
        int a;
        int onee,oneo,twoe,twoo;
        onee=oneo=twoe=twoo=0;

        int i;
        for(i=1; i<=n; i++)
        {
            cin>>a;
            if(i%2 != 0)
            {
                if(a%2 == 0)
                {
                    onee++;
                }

                else
                {
                    oneo++;
                }
            }

            else
            {
                if(a%2 == 0)
                {
                    twoe++;
                }
                else
                {
                    twoo++;
                }
            }
        }

        if(onee>0 && oneo>0 || twoe>0 && twoo>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
