class Solution
{
public:
    int myAtoi(string s)
    {
        int i{0};
        char ch;

        const int len{static_cast<int>(s.length())};

        if (!len)
            return 0;

        while (i < len && s[i] == ' ')
            i++;

        if (i == len)
            return 0;

        bool negative = (ch = s[i]) == '-';

        if (negative || s[i] == '+')
            ++i;

        const int maxLimit = INT_MAX / 10;
        int result = 0;

        while (i < len && isdigit(ch = s[i]))
        {

            int digit = ch - '0';

            if (result > maxLimit || (result == maxLimit && digit > 7))
            {
                return negative ? INT_MIN : INT_MAX;
            }

            result = (result * 10) + digit;

            ++i;
        }

        return negative ? -result : result;
    }
};