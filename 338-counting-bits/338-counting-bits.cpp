class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        for(int i=1 ;i<=n; i++){
            int temp=(i&1) +res[i/2];
            res.push_back(temp);
        }
        return res;
    }
};