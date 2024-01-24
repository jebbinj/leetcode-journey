// class Solution
// {
// public:
//     bool isPalindrome(string s)
//     {

//         uint32_t i{0};
//         char charsInString[s.length()];

//         for (const auto &c : s)
//         {
//             if (isalnum(c))
//             {
//                 charsInString[i++] = tolower(c);
//             }
//         }

//         for (size_t j = 0; j < i / 2; ++j)
//         {
//             if (charsInString[j] != charsInString[i - j - 1])
//                 return false;
//         }

//         return true;
//     }
// };

class Solution
{

public:
    bool isPalindrome(string s)
    {

        uint32_t i{0}, j{static_cast<uint32_t>(s.length()) - 1};

        while (i < j)
        {

            while (!isalnum(s[i]) && i < j)
                ++i;

            while (!isalnum(s[j]) && i < j)
                --j;

            if (i < j && tolower(s[i++]) != tolower(s[j--]))
                return false;
        }

        return true;
    }
};