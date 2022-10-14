/*
https://practice.geeksforgeeks.org/problems/remove-character3815/1
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, s;
    cin >> s1 >> s2;
    map<char, int> string2Characters;
    for (int i = 0; i < s2.length(); i++)
    {
        string2Characters[s2[i]] = 1;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (!string2Characters[s1[i]])
        {
            s.push_back(s1[i]);
        }
    }
    cout << s;

    return 0;
}