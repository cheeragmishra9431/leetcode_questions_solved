class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.length();
        int n=p.length();
        unordered_map<char,int> sp;
        unordered_map<char,int> pp;
        for(int i=0; i<n; i++){
            sp[s[i]]++;
            pp[p[i]]++;
        }
        vector<int>res;
        for(int i=0; i<=m-n;i++){
            bool flag=true;
            for(auto it: pp){
                if(it.second!=sp[it.first]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res.push_back(i);
            }
            sp[s[i]]--;
            sp[s[i+n]]++;
        }
        return res;
            
    }
};