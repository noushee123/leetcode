class Solution{
public:
int findleftMost(vector<int> &nums,int target,int n){
        int s=0,e=n-1;
  
  int left_Most = -1;
  
  while(s<=e){
     int mid = s+(e-s)/2;
    
    if(nums[mid]==target){
        left_Most = mid;
        e=mid-1;
    }
    else if(nums[mid]>target){
          e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return left_Most;
}
 
int findrightMost(vector<int> &nums,int target,int n){
        int s=0,e=n-1;
  
  int right_Most = -1;
  
  while(s<=e){
     int mid = s+(e-s)/2;
    
    if(nums[mid]==target){
        right_Most = mid;
        s=mid+1;
    }
    else if(nums[mid]>target){
          e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return right_Most;
}
vector<int> searchRange(vector<int>& nums, int target) {
  int n = nums.size();
  
  int left_Most = findleftMost(nums,target,n);
  int right_Most = findrightMost(nums,target,n);
  
  return(left_Most,right_Most);
}
