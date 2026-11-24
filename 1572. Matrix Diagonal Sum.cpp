class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        vector<int> answer;
        int i;
        int j;
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat.size();j++){
                if(i==j){
                    answer.push_back(mat[i][j]);
                }
            }
        }
        int k=mat.size()-1;
        for(i=0;i<mat.size();i++) {
            if (i!=k){
                int s_d=mat[i][k];
                answer.push_back(mat[i][k]);
            }
            k--;
        }
        int final_answer=0;
        for(i=0;i<answer.size();i++){
            final_answer = final_answer + answer[i];
        }
        return final_answer;
    }
};