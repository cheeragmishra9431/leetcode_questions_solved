// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	int minRemoval(int arr[], int n)  {

    sort(arr,arr+n);

    int index=0;

    int mincount=INT_MAX;

    if(2*arr[0]>arr[n-1]){
        return 0;
    }
    for(int i=0;i<n-1;i++){

        index=upper_bound(arr,arr+n,2*arr[i])-arr;

        mincount=min(mincount,n-1-index+i+1);

    }

    return mincount;

}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.minRemoval(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends