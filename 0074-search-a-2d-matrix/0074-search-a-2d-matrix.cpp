class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start_row = 0;
        int candidate_row = -1;
        int end_row = matrix.size()-1;        
        while (start_row <= end_row){
            int mid_row = start_row + (end_row - start_row)/2;
            if ((matrix[mid_row][0] <= target) and (target <=matrix[mid_row][matrix[mid_row].size() - 1])){            
            candidate_row = mid_row;
            break;
        }
            else if ( target > matrix[mid_row][matrix[mid_row].size() - 1])
            start_row = mid_row+1;
            else if ( target < matrix[mid_row][0])
            end_row = mid_row-1;
        }
        if (candidate_row == -1) return false;
        int i=0,j=matrix[0].size()-1;
        while (i<=j){
            int mid = i+(j-i)/2;
            if (target == matrix[candidate_row][mid]) return true;
            else if ( target > matrix[candidate_row][mid]){
                i = mid+1;
                
            }
            else if ( target < matrix[candidate_row][mid]){
                 j = mid-1;
                 
            }
        }
        return false;
    }
};
        