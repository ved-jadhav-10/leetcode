class Solution {
public:
    int romanToInt(string s)
    {
        int value = 0;
        unordered_map<char, int> values = 
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (int i = 0; i < s.size(); i++)
        {            
            if (values[s[i]] >= values[s[i+1]])
            {
                value = value + values[s[i]];
            }
            else
            {
                value = value - values[s[i]];
            }
        }
        return value;
    }
};