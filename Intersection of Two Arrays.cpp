class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::const_iterator itr1=nums1.cbegin();
        vector<int>::const_iterator itr2=nums2.cbegin();
        set<int> set1;
        for(itr1=nums1.cbegin();itr1<nums1.end();itr1++){
            for(itr2=nums2.cbegin();itr2<nums2.end();itr2++){
                if(*itr1==*itr2){
                    set1.insert(*itr1);
                }
            }
        }
        vector<int> vc(set1.begin(), set1.end());
        return vc;
    
 
    }       
    
};
