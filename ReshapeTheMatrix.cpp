class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      vector<int> arr;  
      int row = mat.size();
      int col = mat[0].size();

      if(row*col!=(r*c)) return mat;
      for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
               arr.push_back(mat[i][j]);
         }
      }
      vector<int>> ans(r,(vector<int> (c));
      int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=arr[k++];
            }
        }
      return ans;
    }
}
