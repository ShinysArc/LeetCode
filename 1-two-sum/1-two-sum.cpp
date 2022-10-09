class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int, int> map;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (map.find(complement) != map.end())
            {
                res.push_back(map.find(complement)->second);
                res.push_back(i);
                break;
            }
            
            map.insert(pair<int, int>(nums[i], i));
        }
        
        return res;
    }
};