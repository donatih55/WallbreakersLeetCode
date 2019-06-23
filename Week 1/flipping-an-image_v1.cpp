class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int innerSize = A.at(0).size(); // The size of the inner vector
        for(int i = 0 ; i < A.size(); i++){ // go through every inner vector
            for (int j = 0; j < (innerSize/2); j++){ //swap up to half of the inner vector
                swap(A.at(i).at(j), A.at(i).at(innerSize - 1 - j));
            }
            for (int j = 0; j < innerSize; j++){ // bit operation (turn 1 into 0 and 0 into 1s)
                A.at(i).at(j) = (A.at(i).at(j) + 1) % 2;
            }
        }
        return A;
    }
};