// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	long long getCount(int N)
{
 // Your code goes here
 
   vector<int> choice[10]={{0,8},{1,2,4},{1,2,3,5},
   {2,3,6},{1,4,5,7},{2,4,5,6,8},
   {3,5,6,9},{4,7,8},{5,7,8,9,0}
   ,{6,8,9}};
   
  
 vector<long long> dp(11);
 for(int i=0;i<=9;i++){
     dp[i]=1;
 }
   
   long long sum=0;
   for(int i=2;i<=N;i++){
      vector<long long> dp1(11);
       for(int num = 0;num<= 9;num++){
           for(auto a:choice[num]){
               dp1[a]+=dp[num];
           }
       }
       dp=dp1;
   }
   
   for(int i=0;i<=9;i++){
       sum+=dp[i];
   }
   return sum;
   
}


};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.getCount(n) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends