class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(2);
        vector<int> arr(n+1,0);
        for (int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }        
        for (int j=1;j<=nums.size();j++){
            if (arr[j]>1) res[0] = j;
            if (arr[j]<1){
                res[1] = j;
                
            }
        }
        return res;
    }
};
