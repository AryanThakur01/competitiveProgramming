/**
 * Given an array a of N integers. Given Q queries and in each query given a number X, print count of that number in array.
 * Constraints:
 *  1 <= N <= 10^5
 *  1 <= a[i] <= 10^7
 *  1 <= Q <= 10^5
 */
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        cout << hsh[x] << endl;
    }

    // Time complexity without hashing O(N) + O(Q*N) = O(N^2) = 10^10
    // Time complexith with hashing O(N) + O(Q*N) = O(N^2) = 10^10
    return 0;
}




//There are two methods for hashing negative numbers:
// 1. use ordered and unordered maps
// 2. add the absolute value of minumum negative number to all the elments so that all the numbers turn positive. Now to access any element use the simple maths and SOME BRAIN. YOU ARE AN ENGINEER AFTERALL