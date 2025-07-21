class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        if (prices.size() == 1)
            return 0;

        int maxProfit = 0, minNum = prices[0];

        for (auto i = 1; i < prices.size(); ++i)
        {

            maxProfit = max(maxProfit, prices[i] - minNum);
            minNum = min(minNum, prices[i]);
        }

        return maxProfit;
    }
};