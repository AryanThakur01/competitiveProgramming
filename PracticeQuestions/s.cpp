// /*
// https://www.spoj.com/problems/OPMODULO/
// */

#include <iostream>
using namespace std;

int main()
{
    long long l, r, sum = 0;
    cin >> l >> r;
    long long i = 1;
    while (i <= r)
    {
        if (i >= l)
        {
            sum += i;
        }
        i = i * 2;
    }
    cout << sum;
    return 0;
}