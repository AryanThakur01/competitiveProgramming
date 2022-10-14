/*
https://practice.geeksforgeeks.org/problems/reverse-a-string/1
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string revStr;
    for (int i = s.length()-1; i >= 0 ; i--)
    {
        revStr.push_back(s[i]);
    }
    cout<<revStr;
    
    return 0;
}