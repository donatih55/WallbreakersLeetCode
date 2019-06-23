class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<int> inner;
        vector<vector<int>> outer;
        for(int i = 0; i < A.at(0).size(); i++ ){ // go through each of the inner items
            for (int j = 0 ; j < A.size(); j++){ //go through each of the outer items
                inner.push_back(A.at(j).at(i)); // inser the transposed elements into the iiner
            }
            outer.push_back(inner); // push the transposed iiner into the outer vector
            inner.clear(); // clear the inner vector so we can push more stuff in it
        }
        return outer;
    }
};