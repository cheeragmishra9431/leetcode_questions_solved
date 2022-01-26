class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int index;
        int n=arr.size();
        if(n==1 || n==2){
            return false;
        }
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                continue;
            }
            else{
                index=i-1;
                break;
            }
        }
        int index2;
        for(int i=n-2;i>=0; i--){
            if(arr[i]>arr[i+1]){
                continue;
            }
            else{
                index2=i+1;
                
                break;
            }
        }
        if(index==index2){
            return true;
        }
        else{
            return false;
        }
        
    }
};