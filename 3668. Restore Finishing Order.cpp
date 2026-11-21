//
// Created by Ajay Thirunavukkarasu on 21/11/26.
//
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> answer;

        for(int o=0;o<order.size();o++){
            for(int f=0;f<friends.size();f++){
                if (friends[f] == order[o]){
                    answer.push_back(order[o]);
                }

            }
        }
        return answer;


    }
};