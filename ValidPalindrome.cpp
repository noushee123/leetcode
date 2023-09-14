class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
    char lowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch - 'A'+'a';
            return temp;
        }
    }
    bool checkPalindrome(string s){
        int start = 0;
        int end = s.length()-1;

        while(start<=end){
           if(s[start]!=s[end]){
               return 0;
           }
           else{
               start++;
               end--;
           }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
    for(int j=0;j<temp.length();j++){
        temp[j] = lowerCase(temp[j]);
    }
    
    return checkPalindrome(temp);

    }
};
