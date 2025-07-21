class Solution
{
public:
    int climbStairs(int n)
    {

        if (n <= 1)
            return 1;

        uint32_t prev{1}, curr{1}, temp;

        for (auto i = 2; i <= n; i++)
        {

            temp = prev;
            prev = curr;
            curr = prev + temp;
        }

        return curr;
    }
};