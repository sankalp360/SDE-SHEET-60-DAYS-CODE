int profit = 0;
int buy = INT_MAX;
int sell = 0;
for (int i = 0; i < prices.size(); i++)
{
    if (buy > prices[i])
    {
        buy = prices[i];
        continue;
    }
    sell = prices[i];
    profit = max(prof, sell - buy);
}

return profit;