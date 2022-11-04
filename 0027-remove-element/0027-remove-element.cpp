class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = nums.size();
        
        auto i = 0;
        auto j = 0;
        while (j < nums.size())
        {
            if (val == nums[j])
                j++;
            else
            {
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        
        return i;
    }
};