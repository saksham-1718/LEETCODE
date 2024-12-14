class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int count = 0, n = nums.size();  
        for (int i = 0; i < n; i++) 
        {  
            int sum = nums[i]; 
            for (int j = i + 1; j <= n; j++) 
            { 
                if (sum == k) 
                    count++; 
                if (j < n) 
                    sum += nums[j]; 
            } 
        } 
        return count; 
    }  
};
