class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(),col = matrix[0].size();
        int r = 0,c = col-1;
        while (r <row and  c>=0){
            int mid = matrix[r][c];
            if ((target == mid)){
                return true;
            }
            else if (target < mid){
                c--;
            }
            else {
                r++;
            }
        }
        return false;
    }
};