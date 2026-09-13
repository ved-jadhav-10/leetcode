class Solution {
public:
    bool isPalindrome(int x) 
    {
        if (x < 0)
        {
            return false;
        }

        long compare = x;
        long z = 0;
        long temp = 0;
        while (compare != 0)
        {
            temp = compare % 10;
            compare = compare / 10;
            z = z * 10 + temp;
        }

        if (z == x)
        {
            return true;
        }
        return false;
    }
};