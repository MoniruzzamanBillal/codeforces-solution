#include <bits/stdc++.h>
using namespace std;

int main()
{
    int si, sj;
    si = 3;
    sj = 3;
    int n;
    n = 5;
    int a[n][n];
    int i, j;
    int p, q;
    int s1, s2, sum;
    s1 = s2 = sum = 0;
    p = q = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                p = i;
                q = j;
            }
        }
    }
    p++;
    q++;

    s1 = abs(si - p);
    s2 = abs(sj - q);
    sum = s1 + s2;

    cout << sum;

    return 0;
}
