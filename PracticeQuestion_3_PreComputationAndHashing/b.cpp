/*
https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<long long> findMissing(long long A[], long long B[],
                                  int N, int M)
    {
        unordered_set<int> s;
        vector<long long> ret;
        for (int i = 0; i < M; i++)
        {
            s.insert(B[i]);
        }
        for (int i = 0; i < N; i++)
        {
            if (s.find(A[i]) == s.end())
            {
                ret.push_back(A[i]);
            }
        }
        return ret;
    }
};

int main()
{
    return 0;
}