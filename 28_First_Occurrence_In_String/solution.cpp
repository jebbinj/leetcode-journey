class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int i{0}, j{0}, k{0}, size_h{static_cast<int>(haystack.length())}, size_n(static_cast<int>(needle.length()));

        if (size_h < size_n)
            return -1;

        if (size_h == 1 && size_n == 1 && haystack[0] == needle[0])
            return 0;

        while (i < size_h)
        {

            j = i;
            k = 0;

            while (j < size_h && k < size_n && haystack[j] == needle[k])
            {
                ++j;
                ++k;
            }

            if (k == size_n)
                return i;

            ++i;
        }

        return -1;
    }
};