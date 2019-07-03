class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        set<int> s;
        set<int>::iterator itr;
        for (int i = 0; i < nums1.size();i++){
            for(int j = 0; j < nums2.size();j++){
                if (nums1[i] == nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        for(itr = s.begin(); itr != s.end(); ++itr){
            ret.push_back(*itr);
        }
        return ret;
    }
};