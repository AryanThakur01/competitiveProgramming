/*
https://leetcode.com/problems/student-attendance-record-i/
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int A = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L' && s[i] == s[i+2])
            {
                return false;
            }
            if (s[i] == 'A')
            {
                A++;
                if (A==2)
                {
                    return 0;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution str;
    cout<< str.checkRecord("PPLLPPPAL");
    return 0;
}