#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    int len=s.size();
    int sum=0;

    int fir=abs(s[0]-'a');
    if(fir>13){
        sum+=(26-fir);
    }
    else{
        sum=fir;
    }
    int i;
    int sec;
    for(i=0; i<len-1; i++){
        sec=abs(s[i]-s[i+1]);
        if(sec>13){
            sec=26-sec;
            sum+=sec;
        }
        else{
            sum+=sec;
        }
    }
    cout<<endl<<sum<<endl;

    return 0;
}
