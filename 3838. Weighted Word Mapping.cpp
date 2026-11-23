class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<int> mod_ans;
        int map=0;

        int ascii=0;
        string answer;
        for(int i=0;i<words.size();i++){
            vector<int> map_ans;
            for(int j=0;j<words[i].size();j++){
                map=int(words[i][j]);
                map=map-97;
                map_ans.push_back(weights[map]);

            }
            int mod=0;
            for(int k=0;k<map_ans.size();k++){
                mod+=map_ans[k];
            }
            mod=mod%26;
            mod_ans.push_back(mod);
        }
        for(int i=0;i<mod_ans.size();i++){
            ascii=122-mod_ans[i];
            answer.push_back(char(ascii));
        }
        return answer;
    }
};