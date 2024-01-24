class Solution
{
public:
    void reverseString(vector<char> &a)
    {
        for (auto i = 0; i < a.size() / 2; ++i)
        {
            int temp = a[i];
            a[i] = a[a.size() - i - 1];
            a[a.size() - i - 1] = temp;
        }
    }
};