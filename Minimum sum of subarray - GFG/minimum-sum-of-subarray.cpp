#include <iostream>
using namespace std;

int main()  {
int t;
cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
     for(int j=0;j<n;j++){
       int mi=100000;
        int curr=0;
        
        for(int i=j;i<n;i++){
            if(arr[i]+curr<=arr[i])
            curr = arr[i]+curr;
            else
            curr = arr[i];
            
            mi = min(curr,mi);
        }
        cout<<mi<<" ";
     }   
 
 
 cout<<endl;       
}
	return 0;
}