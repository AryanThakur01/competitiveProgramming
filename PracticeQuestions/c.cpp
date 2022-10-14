/*
https://www.codechef.com/problems/FLOW006

Problem
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3
12345
31203
2123
Output
15
9
8
*/

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
        cin >> N;
        int a = 0;
        while (N != 0)
        {
            a += N % 10;
            N = N/10;
        }
        cout<<a<<endl;
    }
    return 0;
}