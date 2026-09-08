class Solution {
public:
    bool isPalindrome(string s) 
    {
        bool boolval = false;
        string result = "";
        for (char c : s)
        {
            if (isalnum(c))
            {
                result += c;
            }
        }

        s = result;
        
        for (char &c : s)
        {
            c = tolower(c);
        }

        string reversed = s;
        reverse(reversed.begin(), reversed.end());

        return s == reversed;
    }
};