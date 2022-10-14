/*
https://www.codechef.com/problems/STONES
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        string J, S;
        cin>>J>>S;
        int jws=0;
        map <char, int> jewels;
        for (int i = 0; i < J.length(); i++)
        {
            jewels[J[i]] =1;
        }
        for (int i = 0; i < S.length(); i++)
        {
            if(jewels[S[i]]){
                jws++;
            }
        }
        cout<<jws<<endl;
    }
    return 0;
}