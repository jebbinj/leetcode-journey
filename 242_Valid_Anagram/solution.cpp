#define ALPHABET_COUNT 26

class Solution
{
private:
    void setCounter(const std::string &str, uint32_t *counter)
    {
        for (char s : str)
        {
            counter[s - 97]++;
        }
    }

public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
            return false;

        uint32_t counterS[ALPHABET_COUNT], counterT[ALPHABET_COUNT];

        memset((void *)counterS, 0, sizeof(counterS));
        memset((void *)counterT, 0, sizeof(counterT));

        setCounter(s, counterS);
        setCounter(t, counterT);

        for (size_t i = 0; i < ALPHABET_COUNT; ++i)
        {
            if (counterS[i] != counterT[i])
                return false;
        }

        return true;
    }
};