class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int h = n;
        while(l <= h) {
            long long mid = l + (h - l) / 2;
            if(mid * (mid + 1) / 2 > n){
                 h = mid - 1;
            }
            else{ 
                l = mid + 1;
        }
        }
        return h;
    }
};
