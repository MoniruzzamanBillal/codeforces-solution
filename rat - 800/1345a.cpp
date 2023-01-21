#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n, m;
        cin >> n >> m;
        int mini, maxa;
        mini = min(n, m);
        maxa = max(n, m);

        if (mini == 1 || (mini == 2 && maxa == 2))
        {
            cout << "yes" << nl;
        }
        else
        {
            cout << "no" << nl;
        }
    }

    return 0;
}
