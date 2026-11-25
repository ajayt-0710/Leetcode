class Solution {
public:
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
        }
        return answer;
    }
};