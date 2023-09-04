class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
             int n = matrix.size();
             int m = matrix[0].size();

             for(int col=0;col<matrix[0].size();col++){
                 for(int row=0;row<matrix.size();row++){
                     if(matrix[row][col]==target){
                         return 1;
                     }
                 }
             }
             return 0;
    }
};
