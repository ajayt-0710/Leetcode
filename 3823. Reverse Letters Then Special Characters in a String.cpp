class Solution {
public:
    string reverseByType(string s) {
        string special_character;
        vector<int> special_character_index;
        string character;
        vector<int> character_index;
        for(int i=0;i<s.length();i++){
            int ascii=s[i];
            if(ascii >= 33 && ascii <=47  || ascii >= 58 && ascii <=64 || ascii >= 91 && ascii <= 96){
                special_character.push_back(s[i]);
                special_character_index.push_back(i);
            }
            else{
                character.push_back(s[i]);
                character_index.push_back(i);
            }
        }
        string rev_special_character = special_character;
        string rev_character = character;
        reverse(rev_special_character.begin(),rev_special_character.end());
        reverse(rev_character.begin(),rev_character.end());
        string answer(s.length(), ' ');
        int a=0;
        for(int i=0;i<rev_special_character.size();i++){
            a=special_character_index[i];
            answer[a]=rev_special_character[i];
        }
        int b=0;
        for(int i=0;i<rev_character.size();i++){
            b=character_index[i];
            answer[b]=rev_character[i];
        }
        return answer;
    }
};