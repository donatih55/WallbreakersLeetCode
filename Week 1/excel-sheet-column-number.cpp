class Solution {
public:
    int titleToNumber(string s) {
        int ret = 0;
        //65 = A in ASCII
        for (int i = s.length() - 1, j = 0; i >= 0; i--, j++){
            ret += (s.at(i) - 64) * pow(26,j);
        }
        return ret;
    }
};