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




int main() {
    vector<string> words={"ad","bd","aaab","baa","badab"};
    string allowed="a";

    countConsistentStrings(allowed, words);

}

