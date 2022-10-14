/*
Problem
One hot summer day Motu and his friend Patlu decided to buy a mango. They chose the biggest and the ripest one, in their opinion. After that the mango was weighed, and the scales showed  units. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Motu and Patlu are great fans of even numbers, that's why they want to divide the mango in such a way that each of the two parts weighs even number of units, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the mango in the way they want. For sure, each of them should get a part of positive weight.

 

Input :

The first (and the only) input line contains integer number  W(1 ≤ w ≤ 1000) — the weight of the mango bought by the boys.

Output :

Print YES, if the boys can divide the mango into two parts, each of them weighing even number of units; and NO in the opposite case.

Sample Input        |        Sample Output
1                   |        NO
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int W;
    cin>>W;
    if(W ==2 || W%2 != 0) cout<<"NO";
    else cout<<"YES";
    return 0;
}