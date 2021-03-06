// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  const int mod=1e9+7;
    long long int countBT(int h) { 
       // code here
       long long dp[h+1];
       dp[0]=1;
       dp[1]=1;
       for(long long i=2;i<=h;i++){
           dp[i]=(dp[i-1]%mod*dp[i-2]%mod+dp[i-2]%mod*dp[i-1]%mod+
                   dp[i-1]%mod*dp[i-1]%mod)%mod;
       }
       return dp[h];
       
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}
  // } Driver Code Ends