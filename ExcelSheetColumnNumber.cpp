class Solution{
public:
int titleToNumber(string columnTitle) {
   int ans=0, n=columnTitle.size() , powerValue = 0;

    for(int i = n-1;i>=0;i--){
        ans+=((columnTitle[i]-'A'+ 1)*pow(26,powerValue++))
    }
  
  return ans;
}
};
