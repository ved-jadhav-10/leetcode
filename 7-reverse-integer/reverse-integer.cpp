class Solution {
public:
    int reverse(int x) 
    {
        long long result = 0;

        while (x != 0)
        {
            int digit = x % 10;
            x /= 10;

            result = result * 10 + digit;

            if (-2147483648LL <= result && result <= 2147483647LL)
            {
                // still within int range
            }
            else
            {
                return 0;
            }
        }

        return result;
    }
};