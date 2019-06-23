class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> returnVector;
        for (int i = 0; i < A.size(); i++){
            if(A.at(i)%2 == 1){
                returnVector.push_back(A.at(i));
            }else{
                returnVector.insert(returnVector.begin(),A.at(i));
            }
        }
    return returnVector;
    }
};