class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for (int i = 0; i < nums.size(); i++){
            ret ^=  nums.at(i);
        }
        return ret;
    }
//XOR the same number twice and it becomes 0
};