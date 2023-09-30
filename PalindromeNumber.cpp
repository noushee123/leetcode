class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        double reverse=0;
        int original=x;
        while(x!=0){
        int lastdigit=x%10;
        reverse = reverse*10+lastdigit;
        x/=10;
         } 
        if(original== reverse)
        return true;
        else 
        return false;
    }
};
