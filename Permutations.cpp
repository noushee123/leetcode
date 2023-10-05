class Solution {
public:
    vector<vector<int>> ans;
    void nextPermutation(vector<int>& nums,int in){
        int n=nums.size();

        if(in>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=in;i<n;i++){
            swap(nums[in],nums[i]);
            nextPermutation(nums,in+1);
            swap(nums[in],nums[i]);
        }
       
    }
    vector<vector<int>> permute(vector<int>& nums) {
          nextPermutation(nums,0);
          return ans;
    }
    
};
