class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        for (int i = 0; i < nums1.size();i++){
            for(int j = 0; j < nums2.size();j++){
                if (nums1[i] == nums2[j] && find(ret.begin(),ret.end(),nums1[i]) == ret.end()){
                    ret.push_back(nums1[i]);
                }
            }
        }
        return ret;
    }
};