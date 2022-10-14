/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length(), isItOver = 0;
        for (int i = 0; i < len; i++)
        {
            for (int j = i+1; j < len; j++){
                if(s[i] == s[j]){
                    cout<<"Yes"<<endl;
                    isItOver = 1;
                    break;
                }
            }
            if(isItOver){
                break;
            }
        }
        if(!isItOver){
            cout<<"No"<<endl;
        }
    }
    return 0;
}