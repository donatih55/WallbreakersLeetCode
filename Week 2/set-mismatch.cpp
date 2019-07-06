class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ret;
        unordered_map<int,int> umap;
        unordered_map<int,int>::iterator it;
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }
        //find the num that occurs twice
        for(it = umap.begin(); it != umap.end(); ++it){
            if (it->second >= 2){
                ret.push_back(it->first);
                break;
            }
        }
        //find the num that is missing
        for (int i = 1; i <= nums.size();i++){
            if (umap.find(i) == umap.end()){
                ret.push_back(i);
                break;
            }
        }
        return ret;
    }
};