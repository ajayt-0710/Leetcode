#include<iostream>
#include <set>
using namespace std;

void print_set(set<char> s) {
    for (set<char>::iterator it = s.begin()  ;  it != s.end()  ;  ++it){

        cout << *it << " ";
    }
}

int countConsistentStrings(string allowed, vector<string>& words) {
    set<char> allowed_characters_set(allowed.begin(), allowed.end());

    int consistent_count = 0;

    for (int i = 0; i < words.size(); i++) {
        bool is_consistent = true;

        for (int j = 0; j < words[i].length(); j++) {
            if (allowed_characters_set.find(words[i][j]) == allowed_characters_set.end()) {
                is_consistent = false;
                break;
            }
        }

        if (is_consistent) {
            consistent_count++;
        }
    }
    cout << consistent_count << endl;
    return consistent_count;
}

int reverseDegree(string s) {
    int last=int('z');
    vector<int> product;
    int revese_index=0;
    int sum=0;
    char current_char;
    for(int i=1 ; i<s.length() ; i++){
        current_char = s[i];
        revese_index = last - int(s[i]) + 1;
        product.push_back(revese_index * i);
    }
    for(int i=0 ; i<product.size() ; i++){
        sum+= product[i];
    }
    cout << sum;
    return sum;
}
int scoreOfString(string s) {
    int sub;
    vector<int> subtracted_array;
    int sum;
    for(int i=0 ; i<s.size()-1;i++){
        sub=abs(int(s[i])-int(s[i+1]));
        subtracted_array.push_back(sub);
    }
    for(int i=0;i<subtracted_array.size(); i++){
        sum+= subtracted_array[i];
    }
    return sum;
}
string reversePrefix(string word, char ch) {
    string rev;
    int find;
    find=word.find(ch);
    if (word[find] == ch){
        for(int i=find ; i>0 ; i--){
            rev.push_back(word[i]);
        }
        for(int i=find+1 ; i<word.length() ; i++){
            rev.push_back(word[i]);

        }
    }

    if(rev.empty()){
        return word;
        cout<<word<<endl;
    }
    else{
        return rev;
        cout<<rev<<endl;
    }
}
string restoreString(string s, vector<int>& indices) {
    string answer(s.length(),' ');
    int a=0;
    for(int i=0 ; i<indices.size() ; i++){
        a=indices[i];
        answer.insert(a,1,s[i]);
    }
    return answer;
}
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
vector<int> findMissingElements(vector<int>& nums) {
    int max= *max_element(nums.begin(),nums.end());
    int min= *min_element(nums.begin(),nums.end());
    vector<int> not_missing;
    vector<int> missing;

    for(int i=min;i<=max;i++){
        int c;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==i){

                not_missing.push_back(nums[j]);
                c++;
            }
        }
        if(c==0){
            missing.push_back(i);
        }
        c=0;
    }
    return missing;
}

int main() {
    vector<int> nums={5,1};
    findMissingElements(nums);
    return 0;
}

