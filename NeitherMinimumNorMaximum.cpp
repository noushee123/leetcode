class Solution {
public:
    int findNonMinOrMax(vector<int>& nums){
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        if(n==0 || n==1 || n==2){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(i!=0 && i!=n-1)
             ans = nums[i];
        }  
       return ans;
    }    
};
