class Solution {
public:
    int mySqrt(int x) 
    {
        int ans = 0;
        if (x == 1)
        {
            ans = 1;
        }
        for (int i = 1; i < x; i++)
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