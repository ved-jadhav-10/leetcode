class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
            return false;

        int compare = x;
        long long z = 0;

        while (compare != 0)
        {
            z = z * 10 + compare % 10;
            compare /= 10;
        }

        return z == x;
    }
};