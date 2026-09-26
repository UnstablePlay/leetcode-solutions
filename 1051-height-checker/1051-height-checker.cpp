class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int i=0,count=0;
        vector<int> expected_height = heights;
        sort(expected_height.begin(),expected_height.end());
        while (i < heights.size()){
            if (heights[i] != expected_height[i]) count++;
            i++;
        }
        return count;
    }
};