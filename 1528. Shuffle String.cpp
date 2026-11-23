class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string answer(indices.size(),' ');
        int a=0;
        for(int i=0 ; i<indices.size() ; i++){
            a=indices[i];
            answer[a]=s[i];
        }
        return answer;
    }
};