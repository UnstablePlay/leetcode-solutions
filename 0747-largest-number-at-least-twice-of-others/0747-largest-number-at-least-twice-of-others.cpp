class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int large =-1,large2 = -1,ind=-1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>large)
            {
                large2 = large;
                large = nums[i];
                ind = i;
            }
            else if (nums[i]>large2) large2 = nums[i];           

        }
        if (large >= (large2*2)) return ind;
        else return -1;
    }
};