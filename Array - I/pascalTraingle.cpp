#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n)
{
    // Write your code here.
    vector<vector<long long int>> pascal;
    int k = 0;
    while (k < n)
    {
        pascal.push_back({1});
        for (int i = 1; i <= k; i++)
        {
            if (i == k)
            {
                pascal[k].push_back(1);
                continue;
            }
            pascal[k].push_back(pascal[k - 1][i - 1] + pascal[k - 1][i]);
        }
        k++;
    }
    return pascal;
}
