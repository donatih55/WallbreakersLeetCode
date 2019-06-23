class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int originalSize = A.size();
        for (int i = 0; i < originalSize; i++){
            if(A.at(i)%2 == 1){
                swap(A.at(i),A.at(originalSize - 1));
                i--;
                originalSize--;
            }
        }
    return A;
    }
};