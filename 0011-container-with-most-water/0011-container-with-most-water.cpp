class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int max_area=0;
        int area;
        while (i<j){
            if (height[i] < height[j]){
                area = (j-i)*height[i];                
                i++;
            }
            else{
                area = (j-i)*height[j];                
                j--;
            }
            if (max_area<area) max_area = area;
        }
        return max_area;
    }
};