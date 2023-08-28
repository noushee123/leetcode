class solution{
public:
    bool isMonotonic(vector<int>&nums){
      int n=nums.size();

      if(nums[n-1]>nums[0]){
         for(int i=0;i<n-1;i++){
           if(nums[i+1]<nums[i]){
             return false;
           }
         }
      }
       if(nums[n-1]<nums[0]){
         for(int i=0;i<n-1;i++){
           if(nums[i+1]>nums[i]){
             return false;
           }
         }
      }
       if(nums[n-1]==nums[0]){
         for(int i=0;i<n-1;i++){
           if(nums[i+1]!=nums[i]){
             return false;
           }
         }
      }
      return true;
    }
};
