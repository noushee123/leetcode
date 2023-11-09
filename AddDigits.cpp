class Solution {
public:
    int addDigits(int num) {
         
        while(num>9){
        long long ans = 0;
        while(num>0){
        int lastdigit = num%10;
        ans = lastdigit+ans;
        num/=10;
        }
        num = ans;
        }
        return num;
    }
};
