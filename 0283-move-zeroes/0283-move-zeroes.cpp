class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0,b=0,j=0;
        while (a<nums.size() and b <nums.size()){
            if (nums[a] == 0) a++;
            else{
                j = nums[b];
                nums[b] = nums[a];
                nums[a] =j;
                b++;
                a++;
            }
        }
        
    }
};