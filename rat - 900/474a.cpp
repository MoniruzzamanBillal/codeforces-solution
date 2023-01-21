#include<bits/stdc++.h>
#define khela_suru main()
#define khela_ses return 0
 
using namespace std;
 
int khela_suru
{
    string board="qwertyuiopasdfghjkl;zxcvbnm,./";
    string inp;
    char pos;
    cin>>pos;
    cin>>inp;
    int i,j;
    for(i=0; i<inp.size(); i++)
    {
        for(j=0; j<board.size(); j++)
        {
            if(pos=='R')
            {
                if(inp[i]==board[j])
                {
                    cout<<board[j-1];
                }
            }
            else
            {
                if(inp[i]==board[j])
                {
                    cout<<board[j+1];
                }
            }
        }
    }
 
    khela_ses;
}
