class Solution {
public:
    int findComplement(int num) {
        long twoFactor = 1;
        while (num >= twoFactor){
            twoFactor*=2;
        }
        return num ^ (twoFactor -1);
    }
};
/*
in a nutshell, if there's no leading zeroes, we can just get the number that is all 1s 
and xor with the even number to get the compliment!
any power of 2 -1 is all 1s!
*/