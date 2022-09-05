/*
https://codeforces.com/contest/1102/problem/A

Integer Sequence Dividing
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    // long long sumA = n, sumB = 0;
    // while (n--)
    // {
    //     if(sumA > sumB) sumB += n;
    //     else sumA += n;
    // }
    // cout<<abs(sumA - sumB);
    
    if(n%4 == 0 || n % 4 ==3) cout<<0;
    else cout<<1;
    

    return 0;
}

/*
LOGIC: 
->  take n, n+1, n+2, n+3   :   (n, n+3)in A and (n+1, n+2)in B so that sum(A) - sum(B) become 0
->  after above:   4 possible cases are remaining
                => none element is left =   in this case the difference is 0
                => 3 elements are left(1,2,3) =    in this case put (1,2)in A and (3)in B   =>difference = 0
                => 2 elements are left(1,2) =    in this case put (1)in A and (2)in B       =>difference = 1 
                => 1 element is left(1) =    in this case put (1)in A and nothing in B       =>difference = 1

HENCE IF n IS DIVISIBLE BY 4 OR GIVE REMAINDER AS 3 THE THEN THE DIFFERENCE WILL BE 0
AND IN CASE OF 2 OR 1 AS REMAINDER THE DIFFERENCE WILL BE 1
*/