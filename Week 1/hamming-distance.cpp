class Solution {
public:
    int hammingDistance(int x, int y) {
        int ret = 0;
        x = x ^ y; // reuse X to store the XOR of both
        while (x > 0){
            ret += x & 1; //if the leftmost bit is 1 add it the count
            x = x>>1; // shift everything right
        } // continue until there's no more x
        return ret;
    }
};