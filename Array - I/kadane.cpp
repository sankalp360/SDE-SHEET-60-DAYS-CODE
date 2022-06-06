long long max_sum = 0;
long long sum = 0;
for (int i = 0; i < n; i++)
{
    if (sum < 0)
    {
        sum = 0;
    }
    sum += arr[i];
    max_sum = max(max_sum, sum);
}
return max_sum;