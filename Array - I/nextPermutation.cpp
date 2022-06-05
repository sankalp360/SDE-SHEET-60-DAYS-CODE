#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int breaker = 0;
    int next = -1;
    for (int i = permutation.size() - 1; i > 0; i--)
    {
        if (permutation[i - 1] < permutation[i])
        {
            breaker = i;
            next = i;
            for (int j = i; j < permutation.size(); j++)
            {
                if (permutation[i - 1] < permutation[j])
                {
                    next = j;
                }
            }
            swap(permutation[i - 1], permutation[next]);
            break;
        }
    }
    reverse(permutation.begin() + breaker, permutation.end());
    return permutation;
}