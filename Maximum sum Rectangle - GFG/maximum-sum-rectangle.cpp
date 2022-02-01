// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  

int max_sum(vector<int>a)
   {
int Max = INT_MIN;
int sum_end = 0;
int n = a.size();
for (int i = 0; i < n; i++)
{
 sum_end += a[i];
 if (sum_end > Max) Max = sum_end;
 if (sum_end < 0) sum_end = 0;
}
return Max;
   }
    int maximumSumRectangle(int n, int m, vector<vector<int>> matrix) { int Max = INT_MIN;
for (int l = 0; l < m; l++)
{
 vector<int>a;
 for (int i = 0; i < n; i++)
  a.push_back(matrix[i][l]);
 Max = max(Max, max_sum(a));
 for (int r = l+1; r < m; r++)
 {
  for (int i = 0; i < n; i++)
   a[i] += matrix[i][r];
  Max = max(Max, max_sum(a));
 }
}
return Max;
   }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends