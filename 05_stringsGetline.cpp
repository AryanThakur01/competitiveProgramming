#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // char a = 'aaa'; //ERROR
    // string str = "Hello";
    // cout << str << endl;
    // /*    string str2;
    //     cin >> str2;
    //     cout << str2 << endl;*/
    // string str2 = "World";
    // string result = str + " " + str2;
    // cout << result << endl;
    // if (str == str2)
    // {
    //     cout << "Equal"<<endl;
    // }
    // else
    // {
    //     cout << "Not Equal"<<endl;
    // }
    // cout<<str[0]<<endl;
    // str[0] = 'a';
    // cout<<str<<endl;
    // cout<<str.size()<<endl;
    // int t;
    // cin >> t;
    // cin.ignore();
    // while (t--)
    // {
    //     string str1, str2;
    //     // cin >> str1 >> str2;
    //     // cout << str1 << " " << str2 << endl;
    //     getline(cin, str1);
    //     // getline(cin, str2);
    //     cout << str1 << endl;
    //     // cout << str2 << endl;
    // }
    // This is just for the understanding purpose
    // getline works on the basis that it takes input from the postion of present cursor.
    /*
    getline is working in following way
    -> getline starts to take input from just after the value
    -> so \n is entered as one of the input in the getline
    -> hence we used cin.ignore(); = this will work just like cin and will consume the \n character that was entering into the next getline
    */

    // string str;
    // cin >> str;
    // string strRev;
    // for (int i = str.size() - 1; i >= 0; --i)
    // {
    //     // strRev = strRev + str[i];    Try not to use this cuz of 2 reasons
    //     /*
    //     1. we are adding a character in the string
    //     2. time complexity
    //     */
    //    strRev.push_back(str[i]);
    // }
    // cout << strRev<<endl;
    // if(str == strRev)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    // FOR BIG NUMBERS WHICH CAN'T BE ENTERED EVEN IN LONG LONG
    string s;
    cin >> s;
    // cout << (int)s[s.size() - 1] << endl;
    int lastDigit = s[s.size() - 1] - '0';
    cout << lastDigit;
}