class Solution {
public:
    bool isPowerOfTwo(int n) {
        long pow = 1;
        while (pow <= n){
            if (pow == n){
                return true;
            }
            pow = pow *2;
        }
        return false;
    }
};