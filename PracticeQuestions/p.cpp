/*
https://leetcode.com/problems/goal-parser-interpretation/
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string interpret(string command)
    {
        string s;
        for (int i = 0; i < command.length(); i++)
        {
            if (command[i] == 'G')
            {
                s.push_back(command[i]);
            }
            else if (command[i] == 'l')
            {
                // s.push_back('a');
                // s.push_back('l');
                s.append("al");
                i++;
            }
            else if (command[i] == ')')
            {
                s.push_back('o');
            }
        }
        return s;
    }
};

int main()
{
    Solution S;
    string s = S.interpret("G()()()()(al)");
    cout << s << endl;
    return 0;
}