#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string s;
        cin >> N >> s;
        long long dec = 0;
        long long power2 = 1;
        for (int i = 0; i < N; i++)
        {
            dec += power2 * int(s[N -i -1] - '0');
            power2 *= 2;
        }
        cout << dec<<endl;
    }
    return 0;
}