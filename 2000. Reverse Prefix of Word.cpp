class Solution {
public:
    string reversePrefix(string word, char ch) {
        string rev;
        int find;
        find=word.find(ch);
        if (find == -1){
            rev=word;
        }
        else{
            for(int i=find ; i>=0 ; i--){
                rev.push_back(word[i]);
            }
            for(int i=find+1 ; i<word.length() ; i++){
                rev.push_back(word[i]);

            }
        }

        if(rev.empty()){
            return word;
        }
        else{
            return rev;
        }
    }
};