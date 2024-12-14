class Solution {
public:
    int mySqrt(int x) {
        int low=1;
       long int mid;
        int high=x/2;
        if(x==1) return 1;
        if(x==0) return 0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(mid*mid<x) return mid;
        else return mid-1;

    }
};
