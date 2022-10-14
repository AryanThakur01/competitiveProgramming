#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printHello(int a, int b)
{
    cout << "Hello World" << endl;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

int digitSum(int n)
{
    int digitSum = 0;
    while (n)
    {
        digitSum = digitSum + n % 10;
        n = n / 10;
    }
    return digitSum;
}

void increment(int &n, int n1) // passing by reference
{
    n++;
    n1++;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void func(string &s)
{
    s = "";
}


// Avoid passing an n-d array to a function because we cannot always get the other dimensions of an array
const int N = 1e3+10;
int a[N][N];

void func2()       // for any array which is not 1d we can skip only the first dimension
{
    a[0][0] = 5;
}
// To use an array in a function make the variable global although it is not good from a programming point of view

int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << digitSum(a) + digitSum(b);

    // int a = 3;
    // int b = 5;
    // cout << a << " "<<b<< endl;
    // increment(a, b);
    // cout << a <<" "<<b<< endl;

    // int a = 5, b = 8;
    // cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;
    // swap(a, b);                     // swap is also an inbuilt function in c++
    // cout<<"a = "<<a<<"\t"<<"b = "<<b<<endl;

    // string s= "asfsa";
    // cout<<s<<endl;
    // func(s);
    // cout<<s<<endl;

    a[0][0] = 7;
    cout << a[0][0] << endl;
    func2();               //Arrays are always passed by reference
    cout << a[0][0] << endl;

    return 0;
}