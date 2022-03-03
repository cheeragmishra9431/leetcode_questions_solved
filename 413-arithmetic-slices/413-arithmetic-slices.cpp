class Solution {
public:
    int func(vector<int> &nums,int diff,int idx){
        if(idx >= nums.size()) return 0;
        if(nums[idx]-nums[idx-1] == diff){
            return 1 + func(nums,diff,idx+1);
        }else return 0; 
    }
    int numberOfArithmeticSlices(vector<int>& nums){
        if(nums.size() == 1 || nums.size() == 2) return 0;
        int ans = 0;
        for(int i=0;i<=nums.size()-3;i++){
            int diff = nums[i+1] - nums[i];
            if(nums[i+2]-nums[i+1] == diff && nums[i+1]-nums[i] == diff){
                ans += 1 + func(nums,diff,i+3);
            }
        }
        return ans;
    }
};