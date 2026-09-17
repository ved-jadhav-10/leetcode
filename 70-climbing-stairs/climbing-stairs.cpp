class Solution {
public:
    int climbStairs(int n) 
    {
        if (n == 1)
        {
            return n;
        }
        int count = 1;
        int i = 1;
        int j = 1;
        int temp = 0;
        while (count < n)
        {
            count++;
            temp = i;
            i = j;
            j = j + temp;
        }
        return j;
    }
};