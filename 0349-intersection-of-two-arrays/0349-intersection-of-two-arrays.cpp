class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums3 = {};
        unordered_set<int>ans = {};
        vector<int>answer={};
        int n1 =0,n2=0,a=0;
        if (nums1.size()<nums2.size()){
            for (auto x : nums1){
                ans.insert(x);
            }
            for (int i =0 ; i <nums2.size(); i++){
                if (ans.find(nums2[i])!= ans.end()) nums3.insert(nums2[i]);
            }
        }
        else {
            for (auto x : nums2){
                ans.insert(x);
            }
            for (int i =0 ; i <nums1.size(); i++){
                if (ans.find(nums1[i])!= ans.end()) nums3.insert(nums1[i]);
            }
        } 
        for (auto j : nums3){
            answer.push_back (j);
        }      
        return answer;
    }
};