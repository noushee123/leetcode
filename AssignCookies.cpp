class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());

      int i=0,j=0,count = 0;
      while(i<g.size() && i<s.size()){
          if(g[i]>s[j]){
             j++;
          }
          else if(g[i]<=s[i]){
            count++;
            i++;
            j++;
          }
      }
      return count;
    }
}
