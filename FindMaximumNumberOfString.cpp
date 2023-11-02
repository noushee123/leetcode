class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        string s;
        int count = 0;
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                s = words[j];
                reverse(s.begin(),s.end());
                if(words[i]==s)    count++;
            }
        }
        return count;
    }
};
