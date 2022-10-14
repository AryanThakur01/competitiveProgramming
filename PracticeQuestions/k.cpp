/*
https://www.hackerrank.com/challenges/printing-pattern-2/problem
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revIterator(int start, int end, int prValue){
    for (int i = start; i < end; i++)
    {
        cout<<prValue;
    }
}

void printLineLowerRectangle(int n, int t)
{
    for (int i = n; i > t; i--)
    {
        cout << i << " ";
    }
    for (int i = 1; i < 2 * t; i++)
    {
        cout << t << " ";
    }
    for (int i = t + 1; i <= n; i++)
    {
        cout<<i<<" ";
    }

    cout << endl;
}
void printLineUpperRectangle(int n, int t)
{
    for (int i = n; i > t; i--)
    {
        cout << i << " ";
    }
    for (int i = 1; i < 2 * t; i++)
    {
        cout << t << " ";
    }
    for (int i = t + 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        printLineUpperRectangle(n, i);
    }
    for (int i = 2; i <= n; i++)
    {
        printLineLowerRectangle(n, i);
    }
    return 0;
}

// TRY SOLVING USING MATRIX TO SIMPLIFY THE PROBLEM