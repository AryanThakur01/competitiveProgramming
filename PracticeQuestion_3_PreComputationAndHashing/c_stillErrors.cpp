/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
This method can be used but it is fuckin slow, time complexity = O(n^2)
*/
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         int t = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (k > arr[i] && arr[j] == k - arr[i])
//             {
//                 cout << "YES";
//                 t = 1;
//                 break;
//             }
//         }
//         if (t == 1)
//         {
//             break;
//         }
//     }
//     return 0;
// }

/*
OPTIMIZED METHOD; Time Complexity = O(n)
*/

const int n = 1e7 + 10;
int hsh[n];

int main()
{
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        hsh[A[i]] = k - A[i];
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (hsh[A[i]] == k - hsh[hsh[A[i]]])
        {
            cout << "YES";
            t = 1;
            break;
        }
    }
    if (t == 0)
    {
        cout << "NO";
    }

    return 0;
}