class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        int max = INT_MIN;

        for(int i=0; i<n; i++){
            if(nums[i]>max){
                max = nums[i];
                idx = i;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(max<2*nums[i] && nums[i]!=max) return -1;
        }

        return idx;

    }
};
