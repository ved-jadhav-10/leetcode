class Solution {
public:
    int mySqrt(int x) 
    {
        int ans = 0;
        if (x == 0 || x == 1)
        {
            return x;
        }
        for (int i = 1; i < (x/2)+1; i++)
        {
            if ((long long)i * i <= x)
            {
                ans = i;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};