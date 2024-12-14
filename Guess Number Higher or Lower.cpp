class Solution {
public:
    int guessNumber(int n) {
        if(guess(n)==0){
            return n;
        }
        int l=1;
        int h=n;
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==1){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return -1;
    }   
};
