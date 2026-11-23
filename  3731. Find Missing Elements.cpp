//
// Created by Ajay Thirunavukkarasu on 23/11/26.
//
class Solution {
public:
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
};