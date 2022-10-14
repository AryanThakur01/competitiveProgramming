/*
Given 2D array a of N*N integers. Given Q queries and in each query given a, b, c and d print sum of square represented by (a, b) as top left point and (c, d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a, b, c, d <= N
*/
#include <bits/stdc++.h>
using namespace std;

// const int N = 1e3 + 10;
// int ar[N][N];

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cin >> ar[i][j];
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int a, b, c, d;
//         cin >> a >> b >> c >> d;
//         long long sum = 0;
//         for (int i = a; i <= c; i++)
//         {
//             for (int j = b; j <= d; j++)
//             {
//                 sum += ar[i][j];
//             }
//         }
//         cout << sum;
//     }
//     // TIME COMPLEXITY O(N^2) + O(Q*N^2) = 10 ^ 5 * 10^11
//     return 0;
// }

const int N = 1e3 + 10;
int ar[N][N];
long long pf[N][N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            pf[i][j] = ar[i][j] + pf[i - 1][j] - pf[i - 1][j - 1];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1];
    }
    // TIME COMPLEXITY: O(N^2) O(Q) = 10^6 + 10^5 = 10^6

    return 0;
}