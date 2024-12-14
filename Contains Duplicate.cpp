class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>::iterator it1=nums.begin();
        vector<int>::iterator it2=nums.begin()+1;
        for(it1=nums.begin();it1<nums.end();it1++){
            for(it2=it1+1;it2<nums.end();it2++){
                if(*it1==*it2){
                    return true;
                }
                it1++;
            }
        }
        return false;
    }
    
    
};
