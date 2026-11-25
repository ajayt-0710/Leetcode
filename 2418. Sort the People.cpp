class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>> combine;
        for(int i=0;i<names.size();i++){
            combine.push_back({names[i],heights[i]});
        }
        sort(heights.begin(),heights.end());
        vector<string> answer;

        for (int i=heights.size()-1;i>=0;i--) {
            for (int j=0;j<combine.size();j++) {
                if (heights[i] == combine[j].second) {
                    answer.push_back(combine[j].first);
                    break;
                }
            }
        }
        return answer;

    }
};