class Solution {
public:
    int reverseDegree(string s) {
        int last=int('z');
        vector<int> product;
        int revese_index;
        int sum=0;
        for(int i=0 ; i<s.length() ; i++){
            revese_index=int(last - int(s[i]) + 1);
            product.push_back(revese_index * (i+1));
        }
        for(int i=0 ; i<product.size() ; i++){
            sum+= product[i];
        }
        return sum;
    }
};