class solution{
public:
 int lengthOfLastPosition(string s){
       int n=s.size();
       int count = 0 , flag = 0;
       for(int i=n-1;i>=0;i--){
         if(s[i]==' ' && flag==1) break;
         if(s[i]!=' '){
           flag = 1;
           count++;
         }
       }
   return count;
 }
};
