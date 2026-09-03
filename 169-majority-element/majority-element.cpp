class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;
        int n = nums.size();

        for (int num : nums) {
            count[num]++;

            if (count[num] > n / 2) {
                return num;
            }
        }
        return -1;
    }
};