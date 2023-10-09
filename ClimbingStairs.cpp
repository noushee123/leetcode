class Solution {
public:
    int climbStairs(int n) {
       vector<int> climb(n+1,0);
       climb[0]=1;

       for(int i=1;i<n+1;i++){
           climb[i] = climb[i-1];
           if(i>1){
               climb[i] = climb[i] + climb[i-2];
           }
       }
       return climb[n];
    }
    
};
