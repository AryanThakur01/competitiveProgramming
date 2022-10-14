#include<iostream>
#include<bits/stdc++.h>     //Most of the header files used for competitive programming are included int this
using namespace std;

int main(){
    cout<<"Hello";
    cout<<sqrt(16);

    // Datatyes
    // char, int, boolean, double, float
    char c = 'a';
    int a = 3;
    cout<<c<<" "<< a<<endl;
    a= 3.5;
    double b = 3.5;
    bool d = 123;
    cout<<"Any value other than 0 is considered true in boolean "<<d;
    // long int, long long int for longer integer values


    // + : addition
    // % : gives remainder

    cout<< a <<endl;
    cout<<"first use the value of a  and then increase, use a++ for this purpose\t"<<a++<<endl;
    cout<<"first increment the value of a and the use the value\t"<<++a<<endl;

    // char c = 'ab'; this gives error because char can store only one type
    char p = 'p';
    char q = 'q';
    cout<<(int)p<<endl;
    cout<<int(q)<<endl;
    cout<<p-q<<endl;
    int s;
    double t;
    char u;
    cin>>s>>t>>u;
    cout<<s<<" "<<t<<" "<< int(u);
    
    
    
    return 0;
}