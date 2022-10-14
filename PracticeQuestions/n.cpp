/*
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int length = s.length();
    int YesOrNo = 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length-1 - i])
        {
            cout << "NO";
            YesOrNo = 0;
            break;
        }
    }
    if (YesOrNo)
        cout << "YES";

    return 0;
}