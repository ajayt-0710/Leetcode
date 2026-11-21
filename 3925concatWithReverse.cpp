class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {

        vector<int> answer;

        for(int i=0;i<nums.size();i++){
            answer.push_back(nums[i]);

        }
        for(int i=nums.size()-1;i>=0;i--){
            answer.push_back(nums[i]);

        }

        return answer;
    }
};