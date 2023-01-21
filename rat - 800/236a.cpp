#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    cin >> s1;
    int i;
    sort(s1.begin(), s1.end());
    int cou = 1;

    for (i = 1; i < s1.size(); i++)
    {
        if (s1[i] != s1[i - 1])
        {
            cou++;
        }
    }
    
    if(cou%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    
    
    return 0;
}
