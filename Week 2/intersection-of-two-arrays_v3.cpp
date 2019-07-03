class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        set<int> s;
        set<int> sUnique;
        set<int>::iterator itr;
        for (int i = 0; i < nums1.size();i++){
            s.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++){
            if (s.find(nums2[i]) != s.end()){
                sUnique.insert(nums2[i]);
            }
        }
        for (itr = sUnique.begin(); itr != sUnique.end(); ++itr){
            ret.push_back(*itr);
        }
        return ret;
    }
};