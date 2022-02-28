class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int i=0;
        int first;
        int second;
        while(i<nums.size()){
            first=nums[i];
            second=nums[i];
            while(i+1<nums.size() && nums[i+1]==nums[i]+1){
                
                second=nums[i+1];
                i++;
            }
            if(first!=second){
                string temp=to_string(first)+"->"+ to_string(second);
                res.push_back(temp);
                i++;
            }
            else{
                res.push_back(to_string(first));
                i++;
            }
            
        }
        return res;
    }
};