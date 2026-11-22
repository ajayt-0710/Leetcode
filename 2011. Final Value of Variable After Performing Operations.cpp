class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations){
        int answer=0;
        for(int o=0;o<operations.size();o++){
            if (operations[o] == "X++" ||operations[o] == "++X"){
                answer++;
            }
            if(operations[o] == "X--" ||operations[o] == "--X") {
                answer--;
            }

        }
        return answer;

    }

};