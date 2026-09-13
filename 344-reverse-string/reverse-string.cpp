class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int count = 1;
        int x = s.size();
        for (int i = x - 2; i >= 0; i--)
        {
            char t = s[0];
            for (int j = 0; j < x - count; j++)
            {
                s[j] = s[j+1];
            }
            s[x - count] = t;
            count++;
        }
    }
};