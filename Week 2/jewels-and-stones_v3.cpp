class Solution {
	// v1 without hash tables is still more efficient
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<int, int> exists;
        int ret = 0;
        for (int i = 0; i < J.length(); i++){
            exists[J.at(i)] = 0;
        }
        for (int i = 0; i < S.length(); i++){
            if(exists.count(S.at(i)) > 0){
                ret++;
            }
        }
        return ret;
    }
};