/*
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        cout << char(toupper(s[i]));
        if (s[i] == ' ')
        {
            cout << endl;
        }
    }

    return 0;
}
*/


// BEST SOLUTION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A' + (c - 'a');
}

int main(){
    while(true){
        string s;
        cin>>s;
        if(s.size() == 0){
            break;
        }
        for(int i = 0; i<s.size(); ++i){
            s[i] = upper(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}