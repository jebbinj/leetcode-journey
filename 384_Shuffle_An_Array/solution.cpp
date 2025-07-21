class Solution
{
private:
    vector<int> original;
    vector<int> current;

public:
    Solution(vector<int> &nums) : original(nums), current(nums)
    {
        srand(time(0));
    }

    vector<int> reset()
    {
        current = original;
        return current;
    }

    vector<int> shuffle()
    {
        for (auto i = current.size() - 1; i > 0; --i)
        {
            auto j = rand() % (i + 1);
            swap(current[i], current[j]);
        }
        return current;
    }
};