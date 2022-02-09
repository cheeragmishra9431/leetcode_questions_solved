class Solution {
public:
    vector<string>ans;
    unordered_map<string,int> mp;
    int getInvalid(string s){
        stack<char>s1;
        
        for( int i=0; i<s.size(); i++){
            if(s[i]=='('){
                s1.push(s[i]);
            }    
            else if(s[i]==')'){
                if(s1.size()>0 && s1.top()=='('){
                    s1.pop();
                }
                else{
                    s1.push(s[i]);
                }
            }
        }
        return s1.size();
    }
    void helper(string s,int invalid){
        if(mp[s]!=0){
            return;
        }
        else{
            mp[s]++;
        }
        if(invalid<0){
            return ;
        }
        if(invalid==0){
            if(getInvalid(s)==0){
                ans.push_back(s);
                
            }
            return;
        }
        for(int i=0; i<s.size();i++){
            string left=s.substr(0,i);
            string right=s.substr(i+1);
            helper(left+right,invalid-1);
        }
        return ;
    }
    vector<string> removeInvalidParentheses(string s) {
        // string
        helper(s,getInvalid(s));
        return ans;
    }
};