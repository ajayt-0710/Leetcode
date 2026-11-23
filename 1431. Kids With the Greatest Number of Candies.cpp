//
// Created by Ajay Thirunavukkarasu on 23/11/26.
//
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max= *max_element(candies.begin(),candies.end());
        vector<bool> answer;
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= max){
                answer.push_back(true);
            }
            else{
                answer.push_back(false);
            }
        }
        return answer;
    }
};