class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();
        for (auto i : nums){
             map[i]++;
           if(map[i]>n/2){
            return i;
           }
        }
        return -1;
    }   
};
