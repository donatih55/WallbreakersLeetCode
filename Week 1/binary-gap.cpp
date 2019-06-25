class Solution {
public:
    int binaryGap(int N) {
        int maxDist = 0;
        int curDist = 0;
        while (N > 0 && (N & 1) == 0 ){ // for some reason it doesn;t work unles I put the parenthesis on N & 1
            N >>= 1; // baiscally moves until it finds a one
        }
        while (N > 0){
            if(N & 1 == 1){
                if(curDist > maxDist){
                    maxDist = curDist; // return the max distance
                }
                curDist = 1; // if we know there's at least a one, we start the count from 1
            }else{
                curDist++; // if it's a 0 that means it's a gap, so we count it
            }
            N >>= 1;
        }
        return maxDist;
    }
};