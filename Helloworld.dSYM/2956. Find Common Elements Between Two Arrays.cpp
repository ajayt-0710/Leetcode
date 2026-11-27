//
// Created by Ajay Thirunavukkarasu on 27/11/26.
//
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1(nums1.begin(),nums1.end());
        set<int> st2(nums2.begin(),nums2.end());
        int c1=0;
        int c2=0;
        for(int x : nums1){
            if(st2.find(x) != st2.end()){
                c1++;
            }
        }
        for(int x : nums2){
            if(st1.find(x) != st1.end()){
                c2++;
            }
        }
        return {c1,c2};


    }
};