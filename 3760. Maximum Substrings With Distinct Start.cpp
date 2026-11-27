//
// Created by Ajay Thirunavukkarasu on 27/11/26.
//
class Solution {
public:
    int maxDistinct(string s) {
        set<char> st(s.begin(),s.end());
        return st.size();

    }

};