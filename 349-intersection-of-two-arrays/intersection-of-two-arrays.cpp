class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    bool exists = false;
                    for (int k = 0; k < result.size(); k++)
                    {
                        if (result[k] == nums1[i])
                        {
                            exists = true;
                            break;
                        }
                    }
                    if (!exists)
                    {
                        result.push_back(nums1[i]);
                    }
                }
            }
        }
        return result;
    }
};