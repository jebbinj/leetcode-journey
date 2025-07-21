class Solution
{
public:
    int rob(vector<int> &nums)
    {

        auto temp{0}, prevRob{0}, currRob{0};

        for (const auto &x : nums)
        {
            temp = max(prevRob + x, currRob);
            prevRob = currRob;
            currRob = temp;
        }

        return currRob;
    }
};