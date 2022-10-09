class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res(2);
        for (unsigned long i = 0; i < nums.size() - 1; i++)
        {
            for (auto j = i + 1; j < nums.size(); j++)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
            }
        }
        
        return res;
    }
};