/*
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

FIND PRODUCT
Problem
You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo  10^9 + 7.

Input Format:
The first line contains a single integer N denoting the size of the array. The next line contains N space separated integers denoting the elements of the array

Output Format:
Print a single integer denoting the product of all the elements of the array Modulo 10^9 + 7.

Constraints:
1<= N <= 10^3
1<= A[i] <= 10^3

Sample Input            sample output
5                       120
1 2 3 4 5

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    long long answer = 1;
    while (N--)
    {
        long long inp;
        cin>>inp;
        answer = (inp*answer)%(1000000000 +7);
    }
    cout<<answer;

    // long int imin = std::numeric_limits<long int>::min(); // minimum value
    // long int imax = std::numeric_limits<long int>::max(); // maximum value

    // std::cout << imin << " " << imax << std::endl;

    return 0;
}


// REMEMBER IT THAT LONG INT WON'T WORK IN THIS IDE BECAUSE IT HAS A VALUE LOWER THAN THE UPPER LIMIT OF INTEGER QUITE LESS THAN WHAT WE ARE GETTING BY MULTPLYING INP*ANSWER IF INP IS 1000, 1000, 1000, 1000
// MIND THAT BEFORE PRODUCING AN OUTPUT THE PROGRAM IS MULTIPLYING INP AND ANSWER AND HENCE GIVING A VALUE ABOVE THE MAXIMUM VALUE OF THE LONG INT
// BEST USE LONG LONG IN ALL SUCH CASES