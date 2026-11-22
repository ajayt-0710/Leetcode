class Solution {
public:
    int scoreOfString(string s) {
        int sub=0;
        vector<int> subtracted_array;
        int sum=0;
        for(int i=0 ; i<s.size()-1;i++){
            sub=abs(int(s[i])-int(s[i+1]));
            subtracted_array.push_back(sub);
        }
        for(int i=0;i<subtracted_array.size(); i++){
            sum+= subtracted_array[i];
        }
        return sum;
    }
};