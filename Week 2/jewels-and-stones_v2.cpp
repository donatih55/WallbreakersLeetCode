class Solution {
public:
//V1 is faster and more efficient!
    int numJewelsInStones(string J, string S) {
        unordered_map<int, int> exists;
        int ret = 0;
        for (int i = 0; i < S.length(); i++){
            if(exists.count(S.at(i)) > 0){
                exists[S.at(i)] ++;
            }else{
                exists[S.at(i)] = 1;
            }
        }
        for (int i = 0; i < J.length(); i++){
            if(exists.count(J.at(i)) > 0){
                ret += exists[J.at(i)];
            }  
        }
        return ret;
    }
};