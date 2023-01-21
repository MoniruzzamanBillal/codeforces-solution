#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    int i, j;
    ll ma, sum;
    sum = ma = 0;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < k; i++)
    {
        ma = 0;
        for (j = i; j < n; j += k)
        {
            ma = max(ma, a[j]);
        }
        sum += ma;
    }

    cout << sum << endl;
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}
