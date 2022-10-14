/**
 * Given T test cases and in each test case a number N. Print its factorial for each test case %M where M = 10^9 +7.
 * Constraints:
 *  1 <= T <= 10^5
 *  1 <= N <= 10^5
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;  //Note that all the elements are initialized as 0
const int N = 1e5 + 10;  //Note that all the elements are initialized as 0
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
    // O(N) + O(T) = 10^5 + 10^5  is the time complexity
    return 0;
}