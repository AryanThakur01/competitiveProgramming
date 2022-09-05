/*
https://www.codechef.com/LRNDSA01/problems/FLOW007

Problem
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample 1:

INPUT
4
12345
31203
2123
2300

OUTPUT
54321
30213
3212
32
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
        int rev = 0;
        while (N != 0)
        {
            rev *= 10;
            rev += N % 10;
            N = N / 10;
        }
        cout<<rev<<endl;
    }

    return 0;
}