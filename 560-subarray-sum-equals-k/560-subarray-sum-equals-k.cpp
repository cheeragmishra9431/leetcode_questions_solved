class Solution {
public:
    int subarraySum(vector<int>& nums, int K) {
        int result=0;
        int presum=0;
        unordered_map<int,int>mp;
        for(int i=0 ;i<nums.size();i++){
            presum+=nums[i];
            if(presum==K){
                result++;
            }
            if(mp[presum-K]){
                result+=mp[presum-K];
            }
            mp[presum]++;
            
            
        }
        return result;
            
    }
};