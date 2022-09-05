#include <bits/stdc++.h>
using namespace std;

// all the calculations are always in higher data types

int main()
{
    // long double a = 2/7.0;
    // cout<<a<<endl;
    // cout<< 2/7.0<<endl;

    // cout<<7/2*3<<endl;
    // cout<<3*7/2<<endl;
    // The two of the above equations give different results

    // Ranges
    // -10^9<int<10^9
    // -10^12<long int<10^12
    // -10^18<long long int<10^18
    int p = 100000;
    int q = 100000;
    // 1LL is long long
    long long r = p * 1LL * q; 
    cout << r << endl;
}

// overflow is when the value goes outside the rane of a variable