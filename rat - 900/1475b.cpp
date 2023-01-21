#include <bits/stdc++.h>
using namespace std;

void show()
{
    int year;
    cin >> year;
    while (year % 2020 != 0)
    {
        if (year % 2021 == 0)
        {
            cout << "Yes" << endl;
            return;
        }
        year -= 2021;
        if (year < 2020)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        show();
    }

    return 0;
}
