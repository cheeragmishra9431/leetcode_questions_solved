class Solution {
public:
    int helper(int num) {
        int res=0;
        while(num>0){
            res+=num%10;
            num=num/10;
        }
        return res;
    }
    int addDigits(int num) {
        int res=num;
        while(res>=10){
            res=helper(res);
            
        }
        // res+=num;
        return res;
    }
};