#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*  */
    int test;
    cin>>test;
    while(test--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int len1,len2;
        len1=s1.size();
        len2=s2.size();
        int i,j;
        int pos1,pos2;
        pos1=pos2=0;
        int sum=0;

        for(i=1; i<len2; i++)
        {
            for(j=0; j<len1; j++)
            {
                if(s2[i]==s1[j])
                {
                    pos1=j+1;
                }
                if(s2[i-1]==s1[j])
                {
                    pos2=j+1;
                }
                if(pos1>0 && pos2>0)
                {
                    break;
                }
            }
            sum+=abs(pos2-pos1);
            pos1=0;
            pos2=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}
