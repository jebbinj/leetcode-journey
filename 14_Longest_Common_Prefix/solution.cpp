// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {

//         if (strs.size() == 0)
//             return "";

//         int smallest_length{INT_MAX};
//         string smallest_word;
//         string result;

//         for (const string &s : strs)
//         {
//             if (s.length() < smallest_length)
//             {
//                 smallest_length = s.length();
//                 smallest_word = s;
//             }
//         }

//         for (auto i = 0; i < smallest_word.length(); i++)
//         {
//             char ch = smallest_word[i];
//             bool matches = true;

//             for (const auto &s : strs)
//             {
//                 if (s[i] != ch)
//                 {
//                     matches = false;
//                     break;
//                 }
//             }

//             if (!matches)
//                 break;
//             result += ch;
//         }

//         return result;
//     }
// };

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        string result = "";

        sort(strs.begin(), strs.end());

        string first{strs[0]}, last{strs[strs.size() - 1]};

        for (auto i = 0; i < min(first.length(), last.length()); ++i)
        {
            if (first[i] != last[i])
            {
                return result;
            }

            result += first[i];
        }

        return result;
    }
};