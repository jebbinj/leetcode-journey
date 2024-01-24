// class Solution
// {
// public:
//     int firstUniqChar(string s)
//     {
//         for (auto i = 0; i < s.length(); ++i)
//         {
//             for (auto j = 0; j < s.length(); ++j)
//             {
//                 if (i != j && s[i] == s[j])
//                     break;
//                 if ((j + 1) == s.length())
//                     return i;
//             }
//         }
//         return -1;
//     }
// };
class Solution
{
public:
    int firstUniqChar(string s)
    {

        unordered_map<char, int> occ;
        int ans = INT_MAX;

        for (auto i = 0; i < s.size(); ++i)
        {
            if (occ.find(s[i]) == occ.end())
            {
                occ[s[i]] = i;
            }
            else
            {
                occ[s[i]] = INT_MAX;
            }
        }

        for (auto it : occ)
        {
            ans = min(it.second, ans);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};