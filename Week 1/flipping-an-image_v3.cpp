class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int innerSize = A.at(0).size(); //size of the first inner vector
        int temp = 0; // temp int to manually do the swap
        for(int i = 0 ; i < A.size(); i++){ // go through every inner vector
            for (int j = 0; j < (innerSize/2); j++){ // go through every int in the inner vector and turn 0 into 1 and vice versa
                temp = (A.at(i).at(j) + 1) %2;
                A.at(i).at(j) = !(A.at(i).at(innerSize - 1 - j));//Added bitwise
                A.at(i).at(innerSize - 1 - j) = temp;
            }
            if (innerSize % 2 == 1 ){ // if the vector is odd, the middle element won't be caught on the previous loop so we explecitly change the 0s and 1s here
                A.at(i).at(innerSize/2) = !(A.at(i).at(innerSize/2)); //Added bitwise
            }
        }
        return A;
    }
};