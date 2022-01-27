class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs){
        // Variation of Longest Increasing Subsequence
        int n = pairs.size();
        // sort the vector according to the first value.
        // (a,b) then a < b
        sort(pairs.begin(), pairs.end());
        // Find the LIS of sorted vector
        int lis[n];
        lis[0] = 1;
        for(int i = 1; i < n; i++)
        {
            lis[i] = 1;
            for(int j = 0; j < i; j++)
            {
                // (a,b) (c,d) then b < c
                if(pairs[j][1] < pairs[i][0])
                    lis[i] = max(lis[i], lis[j]+1);
            }
        }

        return *max_element(lis, lis+n);
    }
};