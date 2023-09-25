class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        sort(nums.begin(),nums.end());
        
        int max = n/2;
        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                count++;
            }
            if(count==max){
                return nums[i];
            }
        }
        return 0;
    }
};
