#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;          //This is one iteration
    int sum = 0;    //This is one iteration
    sum = x+x;      //This is another iteration
// NUMBER OF ITERATIONS = 3
// O(3) is the time complexity of the above programme


    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int y;
        y = 5;
        y++;
    }
    // Time complexity = O(3*n)
    

// NET TIME COMPLEXITY O(5) + O(3*n)   equivalent to O(n)
// O(3) + O(4)  assume to be O(1) cuz the difference will be way too small
// Number of iterations per second =  10^7 to 10^8(approx.)
// 10^7 -> 1s
// 10^8 -> 10s
// 10^9 -> 100s

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cin>>a[i]
        }
    }
// TIME COMPLEXITY = O(n^2) + O(1) + O(1) = O(n^2)


    cin>>n;
    int ct = 0;
    for(int i = 0; i< n; i++)
    {
        for(int i = 0; i<n; ++i){
            ct++;
        }
    }

    // 



    cin>>n;
    int ct = 0;
    while(n>0){
        n= n/2;
        ct++;
    }
    // 10 -> 5 -> 2 -> 1 -> 0     => 3 steps
    // 8  -> 4 -> 2 -> 1 -> 0     => 3 steps
    // 2^a = N if we can divide N by 2 a times
    // log2(2^a) = log2(N)
    // alog(2) = log2(N)
    // a = log2(N)
    // O(log(N)) is the time complexity of the above programme
    // This is a great time complexity



    // N < 10^5
    cin>>n;
    ct = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
           ct++; 
        }
    }
    // iterations => 0, 1, 2, 3, 4, 5,........n
    // Time Complexity = O(n(n+1)/2)
                    // = O(n^2/2 + n/2)
                    // = O(n^2/2)+ O(n/2)
                    // = O(n^2)
    
    


/*
Size N,Print sum of array in each test case
Constraints:
1 <= T <= 100000
1 <= N <= 100000
1 <a[i]<= 1000
Sum of N over all Test cases is < 10^7
*/
    
    int t;
    cin>>t;
    ct = 0;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 0; i<n; ++i){
            int x;
            cin>>x;
            sum += x;
            ct++;
        }
        cout<<sum<<endl;
    }
// O(ct) = O(10^7); it is the time complexity because of the last line of the question so this code will pass the test
    
    
    return 0;
}

