#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int cou = 0;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            cou++;
        }
        n /= 10;
    }
    cout << ((cou == 4 || cou == 7) ? "YES" : "NO");

    return 0;
}
