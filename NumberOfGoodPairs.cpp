class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
         int count = 0;
        int i=0;
        while(i<n-1){
            int j=i+1;
            while(j<n){
             if(nums[i]==nums[j]){
                count++;
             }
             j++;
            }
          i++;
        }
      return count; 
    }
};
