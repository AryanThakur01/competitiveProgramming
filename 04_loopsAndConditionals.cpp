#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    int c = 5;
    cout << ((a < b) || (b > c)) << endl;
    // && <and>, ||<or>

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES";
    }
    else if (n % 3 == 0)
    {
        cout << "Divisible by 3";
    }
    else
    {
        cout << "NO";
    }

    // While
    // while (/* condition */)
    // {
    //     /* code */
    // }
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    // FOR LOOP
    // for(initialisation; conditions; operationsk){

    // }

    /*
     *
     *  *
     *  *   *
     *  *   *   *
     */
    int t;
    cin >> t;
    while (t--)         // for test cases 
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "*\t";
            }
            cout << endl;
        }
    }
    // infinite loops
    // while(1){}
    // for(;;){}

    // JUMP STATEMENTS
    // break:       when it meets this break then the loop is broken
    // continue:    skip the rest code and go to next iteration
    
}