class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        erase(nums, val);
        int k = nums.size();
        return k;
    }
};