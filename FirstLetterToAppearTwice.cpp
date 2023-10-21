class Solution{
public:
char repeatedCharacter(string s) {
  int n = s.size();
  int mini = INT_MAX;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(s[i]==s[j]){
        mini = min(mini,j);
      }
    }
  }
  return s[mini];
}
};
