class Solution {
public:
    vector<int> countBits(int n) {
     vector<int> ans;
        for(int i=0;i<=n;i++){
            int nums=i;
            int count =0;
            while(nums){
            if(nums&1)
              count++;
    
            nums=nums>>1;
            }
            ans.push_back(count);
        }
        return ans;   
    }
};
