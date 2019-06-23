class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int leftCursor = 0, rightCursor = A.size() - 1; // use cursors to move through the vector
        while (leftCursor < rightCursor){ // while the cursors don't meet
            if (A.at(leftCursor)% 2 != 0){ // if it's Odd move it to the end of the vector
                swap(A.at(leftCursor), A.at(rightCursor));
                --rightCursor; // So that the odd # stays at the end
            }else{ // if even just look at the next number
                ++leftCursor;
            }
        }
        return A;
    }
};