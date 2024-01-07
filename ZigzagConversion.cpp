class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        if(numRows==1)
         return s;
        for(int i=0;i<numRows;i++)
        {
            if(i==0||i==numRows-1)
            {
              int v=numRows+(numRows-2);
              if(i<s.size())
              {
              ans.push_back(s[i]);
              int j=i;
              while(j+v<s.size())
              {
                ans.push_back(s[j+v]); 
                j=j+v;
              }
            }
            }
            else
            {
              int c=0;
              int value1=(numRows+(numRows-2)-i)-i;
              int value2=i+i;
              int j=i;
             if(i<s.size())
              {
              ans.push_back(s[i]);
              while(1)
              {
                  if(j+value1<s.size()&&c==0)
                  {
                      ans.push_back(s[j+value1]);
                      j=j+value1;
                      c=1;
                  }
                  else if(j+value2<s.size()&&c==1)
                  {
                      ans.push_back(s[j+value2]);
                      j=j+value2;
                     c=0;
                  }
                  else
                  break;
              }

              }

            }

        }
        return ans;
    }
};
