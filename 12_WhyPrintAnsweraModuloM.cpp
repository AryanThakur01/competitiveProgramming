#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /**
     * (a+b)%M = ((a%M) + (b%M))%M
     * (a*b)%M = ((a%M) * (b%M))%M
     * (a-b)%M = ((a%M) - (b%M) +M)%M
     * (a/b)%M = ((a%M) * (b^(-1)%M))%M
     */

    /*
    Given a number N. Print its factorial.
    Constraints:
    1<=N<=100

    print answer Modulo M
    //M = 10^9 + 7  is very close to the maximum value of integer
    where M = 47
    a%M
    */
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = (fact * i) % M;
    }
    cout << fact;

    /*
    HOW DOES MODULO WORK HERE?
    ->For example: (1*2*3*4*5)%47
                =((1*2*3*4)%47 *5%47)%47
                =((1*2*3)%47*(4%47))%47
                =((1*2)%47 * (3%47))%47
                .
                .
                .
                .
    */

    return 0;
}