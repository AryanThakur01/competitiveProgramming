/*
https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

Input Format

You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format

For each integer n in the inclusive interval [a,b]:

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Note: [a, b] = {x E Z | a<x<b} = {a, a+1,........., b}}

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string digitToNumber[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // for (int n = a; n < b + 1; n++)
    // {
    //     if (n <= 9 && n <= b)
    //     {
    //         cout << digitToNumber[n - 1] << endl;
    //     }
    //     else if (n >= 9 && n % 2 == 0)
    //     {
    //         cout << "even" << endl;
    //     }
    //     else
    //     {
    //         cout << "odd" << endl;
    //     }
    // }

    while (a <= 9 && a<=b)
    {
        cout << digitToNumber[a-1] << endl;
        a++;
    }
    while (a<=b)
    {
        if(a%2 == 0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
        a++;
    }
    
    return 0;
}