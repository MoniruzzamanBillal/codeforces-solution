#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int maxv = 0;
    int minv = 110;
    int maxi = 0;
    int mini = 0;
    int i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a > maxv)
        {
            maxi = i;
            maxv = a;
        }
        if (a <= minv)
        {
            mini = i;
            minv = a;
        }
    }
    cout << ((maxi > mini) ? ((maxi) + (n - mini)) - 2 : (maxi) + (n - mini) - 1);

    return 0;
}
