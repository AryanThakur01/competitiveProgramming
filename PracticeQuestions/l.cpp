/*
https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1>> s2;
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 + s2<<endl;
    {
        char s = s1[0];
        s1[0] = s2[0];
        s2[0] = s;
    }
    cout << s1 << " " << s2;

    return 0;
}