// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    unordered_map<string,int> m;
    int mod = 1003;
    int F(string s,int i,int j,bool isTrue){
       //base cases
       if(i>j) return 0; //or return false
       if(i==j)
           if(isTrue==true)return s[i]=='T';
           else return s[i]=='F';
       //cheking in the hashmap
       string key = to_string(i)+" "+to_string(j)+" "+to_string(isTrue);
       if(m.count(key)!=0) return m[key];
       //recursive case
       int ans=0;
       for(int k=i+1;k<j;k=k+2)
       {
           int lt= F(s,i,k-1,true);
           int lf= F(s,i,k-1,false);
           int rt= F(s,k+1,j,true);
           int rf= F(s,k+1,j,false);
           //xor operator
           if(s[k]=='^')
               if(isTrue==true) ans += (lt*rf + lf*rt)%mod;
               else ans += (lt*rt + lf*rf)%mod;
           //or operator
           else if(s[k]=='|')
               if(isTrue==true) ans+= (lt*rt + lt*rf + lf*rt)%mod;
               else ans+= (lf*rf)%mod;
           //and operator
           else
               if(isTrue==true) ans+= (lt*rt)%mod;
               else ans+= (lf*rf + lt*rf + lf*rt)%mod;
        }
       return m[key]=ans%mod;
   }
   int countWays(int n, string s)
   {
       return F(s,0,n-1,true)%mod;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends