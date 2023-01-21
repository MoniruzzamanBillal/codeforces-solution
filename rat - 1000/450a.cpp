#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, c, i;
    cin >> n >> c;
 
    int a;
    int turn, index;
    turn = 0;
    int store = 0;
 
    for (i = 0; i < n; i++)
    {
        cin >> a;
 
        turn = ceil(a * 1.0 / c);
 
        if (turn >= store)
        {
            index = i + 1;
            store = turn;
        }
    }
 
    cout << ((store > 1) ? (index) : (n)) << endl;
 
    return 0;
}
