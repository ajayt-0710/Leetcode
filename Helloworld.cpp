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


int main() {
    scoreOfString("hello");

}

