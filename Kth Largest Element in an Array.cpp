class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     int max=0;
      sort(nums.begin(), nums.end(), greater<int>());
      vector<int>::iterator it=nums.begin();
      for(int i=1;i<k;i++) {
            it++;
      } 
      return *it;
    }
};
