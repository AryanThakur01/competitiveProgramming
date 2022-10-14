#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cthNumber = 0;
    for (int i = 2; c >= 1; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            cthNumber = i;
            c--;
        }
    }
    if (cthNumber % b == 0 && cthNumber % a == 0)
    {
        for (int i = cthNumber; i >= 0; i -= lcm(a, b))
        {
            cout << i << "\t";
        }
    }
    else
    {
        int t = (cthNumber % b == 0) ? b : a;
        for (int i = cthNumber; i >= 0; i -= t)
        {
            cout << i << "\t";
        }
    }

    return 0;
}