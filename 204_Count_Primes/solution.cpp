// class Solution
// {
// private:
//     int isPrime(int &n)
//     {

//         if (n == 1)
//             return false;
//         if (n <= 3)
//             return true;

//         // Handle multiples of 2 and 3
//         if (n % 2 == 0 || n % 3 == 0)
//             return false;

//         // Check divisors from 5 to sqrt(n)
//         for (int i = 5; i * i <= n; i += 6)
//         {
//             if (n % i == 0 || n % (i + 2) == 0)
//                 return false;
//         }

//         return true;
//     }

// public:
//     int countPrimes(int n)
//     {
//         int count{0};

//         for (auto i = 1; i < n; ++i)
//         {
//             if (isPrime(i))
//                 count++;
//         }

//         return count;
//     }
// };

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;

        auto count{0};

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (auto i = 2; i * i < n; ++i)
        {

            if (isPrime[i])
            {
                for (auto j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }

        for (const bool &i : isPrime)
        {
            if (i)
                count++;
        }

        return count;
    }
};