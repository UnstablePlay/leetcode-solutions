class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int val,target;
        vector<int> res;
        for (int i=0;i<nums.size();i++)
        {
            val = abs(nums[i]);
            target = val-1;
            if(nums[target]>0) nums[target] = -nums[target];
            else
            {
                res.push_back(val);
            }
        }
        return res;
        
    }
};