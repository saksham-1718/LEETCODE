class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            int count=0;
            for(int n:nums ){
                if(n<=mid){
                    count++;
                }
            }
            if(count>mid){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
