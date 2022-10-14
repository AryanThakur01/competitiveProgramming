#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + a[i];
    // }
    // cout<<sum;

    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j]<<"\t";
        }
        cout<<endl;
    }
    // Try to keep the size of the array to e5 when locally
    // if used globally use const int and we have the size limit of order 1e7

    return 0;
}