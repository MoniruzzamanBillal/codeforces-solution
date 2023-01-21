#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    int com;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    com = sum / 2;
    int cou = 0;

    sort(a, a + n);
    int news = 0;

    reverse(a, a + n);
    for (i = 0; i < n; i++)
    {
        news += a[i];
        cou++;
        if (news > com)
        {
            break;
        }
    }
    cout << cou << endl;

    return 0;
}
