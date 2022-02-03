class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> mp;
        int n=nums1.size();
        for(int i=0; i<n; i++){
            int temp=nums3[i];
            for(int j=0; j<n; j++){
                int temp2=nums4[j];
                mp[temp+temp2]++;
            }
        }
        int res=0;
        for(int i=0; i<n; i++){
            int a1=nums1[i];
            for(int j=0;j<n; j++){
                int a2=nums2[j]+a1;
                if(mp.find(-a2)!=mp.end()){
                    res+=mp[-a2];
                }
            }
        }
        return res;
    }
};