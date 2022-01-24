// { Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 // } Driver Code Ends
// Complete this function
int helper(int arr[], int n, int sum){
    if(sum==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int res=helper(arr,n-1, sum);
    if(arr[n-1]<=sum){
        res+=helper(arr,n,sum-arr[n-1]);
    }
    return res;
}

long long int count(long long int n)
{   
    int arr[]={3,5,10};
    return helper(arr, 3,n );
}

// { Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends