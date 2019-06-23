class Solution {
public:
    bool isSelfDividing(int a){
        string str = to_string(a);
        for(int i = 0; i < str.length(); i++){
            if (str.at(i) - 48 == 0 || a%(str.at(i) - 48)!= 0){
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        while (left <= right){
            if (isSelfDividing(left)){
                ret.push_back(left);
            }
            left++;
        }
        return ret;
    }
};