class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> v;
        vector<string> v1(score.size());
        for(int i = 0; i < score.size(); i++){
            v.push_back({score[i], i});
        }
        sort(v.rbegin(), v.rend());

        for(int i = 0; i < v.size(); i++) {
            if (i == 0) {
                v1[v[i].second] = "Gold Medal";
            }
            else if(i == 1) {
                v1[v[i].second] = "Silver Medal";
            }
            else if(i == 2) {

                v1[v[i].second] = "Bronze Medal";
            }
            else {
                v1[v[i].second] = to_string(i + 1);
            }
        }
        return v1;

    }
};
    
