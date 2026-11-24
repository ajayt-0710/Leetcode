class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> net_gain;
        int n=0;
        net_gain.push_back(n);
        for(int i=0;i<gain.size();i++){
            n=n+gain[i];
            net_gain.push_back(n);
        }
        int answer= *max_element(net_gain.begin(),net_gain.end());
        return answer;
    }
};