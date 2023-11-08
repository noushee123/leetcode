class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> ans;
      int size=nums.size();
      if(size<3)
       return {};
       sort(nums.begin(),nums.end());
       int i=0;
       while(i<size-1){
       int j=i+1,k=size-1;
           int sum=nums[i]*-1;
           while(j<k){
                    if(nums[j]+nums[k]==sum){
                        vector<int>triplet;
                        triplet.push_back(nums[i]);
                        triplet.push_back(nums[j]);
                        triplet.push_back(nums[k]);
                        
                        sort(triplet.begin(),triplet.end());
                        ans.push_back(triplet);
                            
                    while(j<k && nums[j+1]==nums[j]) j++;
                    while(k>j && nums[k-1]==nums[k]) k--;
                    j++; k--;
                }
                else if(nums[j]+nums[k]>sum) k--;
                else j++;
            
           }
           
         while((i<size-1)&&(nums[i+1]==nums[i])) i++;
         i++;
       }
        return ans;
    }
};
