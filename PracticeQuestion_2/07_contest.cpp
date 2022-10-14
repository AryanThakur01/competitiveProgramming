#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char UpperCase(char c)
{
    return 'A' + c - 'a';
}
char LowerCase(char c)
{
    return 'a' + c - 'A';
}

int main()
{
    string str;
    cin >> str;
    int len = str.size(), sum = 0;
    for (int i = 0; i < len; i++)
    {
        // cout<<str[i]<<endl;
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            sum -= LowerCase(str[i]);
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            sum += UpperCase(str[i]);
        }
    }

    if (sum < 0)
        sum = sum * (-1);
    // cout<<sum<<endl;

    for (int i = 2; i < sum; i++)
    {
        if (sum % i == 0)
        {
            cout << 0<<endl;
            break;
        }
        if (i == sum - 1)
        {
            cout << 1<<endl;
        }
    }

    return 0;
}