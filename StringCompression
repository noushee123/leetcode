class Solution{
public:
int compress(vector<char>& chars){

    int index = 0;
    int i = 0;
    
    while(i<n){
    char curr_char = chars[i];
    int count = 0;
    
    while(i<n && char[i]==curr_char){
        count++;
        i++;
        }
        
    int char[index] = curr_char;
    index++;
    
    if(count>1){
     string count_str = to_string(count);
      for(char &ch: count_str){
          char[index]=ch;
          index++;
           }
        }
      }
       return index;
}
}
