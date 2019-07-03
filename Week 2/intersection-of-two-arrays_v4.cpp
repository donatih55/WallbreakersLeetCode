class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        unordered_map<int, int> umap;
        unordered_map<int, int>::iterator itr;
        for (int i = 0; i < nums1.size();i++){
            umap [nums1[i]] = 1;
        }
        for (int i = 0; i < nums2.size(); i++){
            if (umap.find(nums2[i])!= umap.end())
            umap[nums2[i]]--;
        }
        for (itr = umap.begin(); itr != umap.end(); ++itr){
            if (itr->second < 1)
            ret.push_back(itr->first);
        }
        return ret;
    }
};