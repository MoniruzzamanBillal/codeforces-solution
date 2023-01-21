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

        int n;
        int x;
        vector<int> a;
        int i;
        int sum, total;
        sum = total = 0;
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> x;

            if (x == 1)
            {
                a.pb(1);
                total += sum;
                sum = 0;
            }

            else if (!a.empty())
            {
                sum++;
            }
        }

        cout << total << nl;
    }

    return 0;
}
