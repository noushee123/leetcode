class Solution {
public:
int findleftMost(vector<int>& nums,int target, int n){
    int s=0,e=n-1;
    
    int left_most = -1;
    while(s<=e){
        int mid = s+(e-s)/2;

        if(nums[mid]==target){
            left_most = mid;
            e = mid-1;
        }
        else if(nums[mid]< target){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    return left_most;
}
int findrightMost(vector<int>& nums,int target, int n){
    int s=0,e=n-1;

    int right_most = -1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(nums[mid]==target){
            right_most = mid;
            s = mid+1;
        }
        else if(nums[mid]< target){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        
    }
    return right_most;
}
    vector<int> searchRange(vector<int>& nums, int target) {
          int n = nums.size();

          int left_most = findleftMost(nums,target,n);
          int right_most = findrightMost(nums,target,n);

          return {left_most,right_most};
    }
};
