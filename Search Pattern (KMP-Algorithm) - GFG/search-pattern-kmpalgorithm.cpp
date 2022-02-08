// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    void lps1(string pat, vector<int> &ls)
    {
        int len =0, i=1;
        ls[0]=0;
        while(i<pat.length())
        {
            if(pat[i]==pat[len]) ls[i++] = ++len;
            else
                if(len ==0) ls[i++] = 0;
                else len=ls[len-1];
        }
    }
        vector <int> search(string pat, string txt)
        {
            vector<int> v;
            //code hee.
         int m=pat.length();
         int n=txt.length();
         vector<int> lps(m);
         lps1(pat, lps);
         int i=0; int j=0;
         while(i<n && j<m ){
             if(txt[i]==pat[j]){
                 i++; 
                 j++;
             }
             if(j==m){
                 v.push_back(i-j+1);
                 j=lps[j-1];
             }
             else if(i< n && pat[j]!=txt[i]){
                 if(j==0){
                     i++;
                 }
                 else{
                     j=lps[j-1];
                 }
             }
             
         }
         return v;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends