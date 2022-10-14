#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int qty;
        cin>>qty;
        long long sig = 1;
        for (int i = 0; i < qty; i++)
        {
            int number;
            cin >> number;
            sig *= number;
        }
        sig = sig%10;
        if (sig == 2 || sig == 3 || sig == 5)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}