class Solution {
public:
    bool isPalindrome(int x) {
        long int temp=0;
        long int y=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int r=x%10;
            temp=temp*10+r;
            x/=10;
        }
        if(y==temp){
            return true;
        }
        else{
        return false;
        }
    }
};
