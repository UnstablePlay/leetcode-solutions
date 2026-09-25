class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int diff =0;
        unordered_map<int,int> s;
        s.reserve(nums.size());
        for (int i=0; i<nums.size();i++){
            if (s.find(nums[i]) != s.end()){
            diff =  i - s[nums[i]]; 
            if (diff <= k) return true;           
            }
            s[nums[i]] =i;
        }
        
         return false;     
    }
};