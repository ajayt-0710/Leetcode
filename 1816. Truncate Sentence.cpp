class Solution {
public:
    string truncateSentence(string s, int k) {
        string answer;
        int c=0;
        for(int i=0;i<s.length();i++){
            if (s[i] == ' '){
                answer.push_back(' ');
                c++;
            }
            else{
                answer.push_back(s[i]);
            }
            if (c==k){
                answer.pop_back();

                break;
            }
        }
        return answer;
    }


};