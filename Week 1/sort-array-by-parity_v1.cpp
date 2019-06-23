class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int originalSize = A.size();
        for (int i = 0; i < originalSize; i++){
            if(A.at(i)%2 == 1){
                A.push_back(A.at(i));
                A.erase(A.begin() + i);
                i--;
                originalSize--;
            }
        }
    return A;
    }
};