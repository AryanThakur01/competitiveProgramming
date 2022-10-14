/*
Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R(L, R included)

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int pf[N];
// use 1 based array: matlab indexing 1 se shuru karo na ki 0 se taaki first element ki problem solve kari jaa sake... 

int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int l, r;
    //     cin >> l >> r;
    //     long long sum = 0;
    //     for (int i = l; i <= r; i++)
    //     {
    //         sum += a[i];
    //     }
    //     cout << sum << endl;
    // }

    // TIME COMPLEXITY = O(N) + O(Q*N) = 10 ^ 10

    /**
     * array = |_3_||_6_||_2_||_8_||_9_||_2_|
     * prefix Sum = |_3_||_9_||_11_||_19_||_28_||_30_|
     *
     * |________________r_____________________|
     * |______l________||_______reqSum________|
     * required sum = totalSum - sumToIndex
     */

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        cout << pf[r] - pf[l - 1] << endl;
    }
    // O(N) + O(Q) = 10^5

    return 0;
}