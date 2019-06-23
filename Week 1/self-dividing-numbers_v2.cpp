class Solution {
public:
    bool isSelfDividing(int a){ //function to tell if the # is self divisble
        int b = a; // make a copy of A so we can get each # within A separatly 
        while(b > 0){
            if (b%10 == 0 || a%(b%10) != 0){ // if that # is 0 or doesn't divide the original # the # is not self divisble
                return false;
            }
            b = b/10; //make b smaller, so we can get the next # within A
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        while (left <= right){ // go through every # within the given range
            if (isSelfDividing(left)){ // if the number is self divisible, then add to the vector
                ret.push_back(left); 
            }
            left++; // move the cursor to the next element
        }
        return ret;
    }
};