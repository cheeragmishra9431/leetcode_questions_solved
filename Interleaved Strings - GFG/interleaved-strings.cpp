// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
#define vb vector<bool>
#define vbb vector<vb>
class Solution{
  public:
    /*You are required to complete this method */
    bool isInterleave(string A, string B, string C) 
   {
        int l1=A.size(), l2=B.size(), l3=C.size();
        vbb visited(l1+1,vb(l2+1, false));
        queue<pair<int,int>> q;
        if(l1+l2!=l3)return false;
        q.push({0,0});
        while(!q.empty())
        {
            auto p = q.front(); q.pop();
            auto sum=p.first+p.second;
            if(p.first==l1 and p.second==l2) return true;
            if(visited[p.first][p.second]) continue;
            if(p.first<l1 and A[p.first]==C[sum]) q.push({p.first+1,p.second});
            if(p.second<l2 and B[p.second]==C[sum]) q.push({p.first,p.second+1});
            visited[p.first][p.second]=true;
        }
        return false;
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}  // } Driver Code Ends