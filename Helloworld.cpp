#include<iostream>
#include <set>
#include <vector>
#include <string>
#include <sstream>
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

int countPairs(vector<int>& nums, int target) {
    int c=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] + nums[j] < target){
                c++;
            }
        }
    }
    return c;

}

int largestAltitude(vector<int>& gain) {
    vector<int> net_gain;
    int n=0;
    net_gain.push_back(n);
    for(int i=0;i<gain.size();i++){
        n=n+gain[i];
        net_gain.push_back(n);
    }
    int answer= *max_element(net_gain.begin(),net_gain.end());
    return answer;
}

int countPairs2(vector<int>& nums, int k) {
    int multiply;
    int c=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                multiply = i * j;
                if(multiply % 2 == 0){
                    c++;
                }
            }
        }
    }
    return c;
}

string reverseByType(string s) {
    string special_character;
    vector<int> special_character_index;
    string character;
    vector<int> character_index;
    for(int i=0;i<s.length();i++){
        int ascii=s[i];
        if(ascii >= 33 && ascii <=47  || ascii >= 58 && ascii <=64){
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
<<<<<<< HEAD

vector<int> numberGame(vector<int>& nums) {
    vector<int> answer;
    sort(nums.begin(),nums.end());
    for(int i=0;i < nums.size();i++){
        int s=nums.size()-1;
        if(i!=s){
            int a=nums[i+1];
            answer.push_back(a);
            a=nums[i];
            answer.push_back(a);
            i++;
        }
=======
vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> left_sum;
    vector<int> right_sum;
    left_sum.push_back(0);
    right_sum.push_back(0);
    left_sum.push_back(nums[0]);
    int a=nums.size()-1;
    right_sum.push_back(nums[a]);
    vector<int> answer;
    if (nums.size()==2) {
        answer.push_back(left_sum[1]);
        answer.push_back(right_sum[1]);
        return answer;
    }
    auto it1 = nums.begin();
    auto it2=nums.begin()+1;
    int n=*it1 + *it2;
    left_sum.push_back(n);
    for(int i=2;i<nums.size()-1;i++){
        n=n+nums[i];
        left_sum.push_back(n);
    }
    int p=nums[a];
    for(int i=nums.size()-2;i>0;i--){
        p= p + nums[i];
        right_sum.push_back(p);
    }
    reverse(right_sum.begin(),right_sum.end());
    for(int i=0;i<left_sum.size();i++){
        int o=abs(left_sum[i] - right_sum[i]);
        answer.push_back(o);
>>>>>>> 5b659de (27.nov)
    }
    return answer;
}

<<<<<<< HEAD
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
    string final_answer(s.length(), ' ');
    for(int i=0;i<words.size();i++){
        final_answer.replace(i, words[i].length(), words[i]);    }

    return final_answer;
}
int main() {
    string s="is2 sentence4 This1 a3";
    sortSentence(s);
=======
int mostWordsFound(vector<string>& sentences) {
        int j=0;
        vector<int>count;
        for(int i=0;i<sentences.size();i++) {
            int c=0;
            for (int j=0;j<sentences[i].size();j++) {
                char a=sentences[i][j];
                if (sentences[i][j] == ' ') {
                    c++;
                }
            }
            c++;
            count.push_back(c);
        }
    int max= *max_element(count.begin(),count.end());
    return max;
}

string reversePrefix(string s, int k) {
    string answer(s.length(), ' ');
    auto it1=s.begin();
    auto it2=it1+(k-1);
    if (k==1) {
        return s;
    }
    else {
        for(int i=0;i<s.length();i=i+2) {
            reverse(it1,it2);
            it2 = it2+ k;
            it1 = it1 +k;
        }
        return s;
    }

}



vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    int c;
    vector<int> answer;
    vector<int> check;

    c=0;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                c++;
            }
        }
    }

    answer.push_back(c);
    c=0;
    for(int i=0;i<nums2.size();i++){
        for(int j=0;j<nums1.size();j++) {
            int a=nums1[j];
            int b=nums2[i];{
                if(nums1[j]==nums2[i]){
                    c++;
                }
            }
        }
    }
    answer.push_back(c);

    return answer;
}

int main() {
    vector<int> nums1={4,3,2,3,1};
    vector<int> nums2={2,2,5,2,3,6};
    findIntersectionValues(nums1,nums2);


>>>>>>> 5b659de (27.nov)

}

