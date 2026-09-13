class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int count = 1;
        for (int i = s.size() - 2; i >= 0; i--)
        {
            char t = s[0];
            for (int j = 0; j < s.size() - count; j++)
            {
                s[j] = s[j+1];
            }
            s[s.size()-count] = t;
            count++;
        }
    }
};