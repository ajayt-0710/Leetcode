class Solution {
public:
    int prefixCount(vector<string> words,string pref) {
        int length=pref.length();
        int answer=0;
        int c;
        for(int i=0;i<words.size();i++){
            c=0;
            for(int j=0;j<pref.size();j++){
                if(words[i][j]==pref[j]){
                    c++;
                }
                else {
                    break;
                }
            }
            if(c==length){
                answer++;
            }
        }
        return answer;

    }
};