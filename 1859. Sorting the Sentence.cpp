//
// Created by Ajay Thirunavukkarasu on 25/11/26.
//
class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss>>word){
            words.push_back(word);
        }
        vector<string> answer(words.size());
        auto it=words.size();
        for(int i=0;i<words.size();i++){
            int word_index= words[i].size();

            for(int j=word_index-1;j<word_index;j++){
                char a=words[i][j];
                int b=a - '0' -1;
                answer[b] = words[i];
            }
        }
        string final_answer="";
        for(int i=0;i<words.size();i++){
            final_answer+=answer[i] + ' ';

        }
        for(int i=0 ;i<final_answer.length();i++){
            char f = final_answer[i];
            if(final_answer[i] >= 49 && final_answer[i] <= 57){
                final_answer.erase(i,1);
            }
        }
        final_answer.erase(final_answer.length()-1,1);

        return final_answer;
    }
};