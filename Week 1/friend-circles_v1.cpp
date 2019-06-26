class Solution {
public:
   void makeColumn2(vector<vector<int>>& M, int hIndex){ //make all in that column into 2s
        for( int i = 0; i < M.size(); i++){
            if (M.at(i).at(hIndex) == 1){
                M.at(i).at(hIndex) = 2;
                makeRow2(M,i); // make sure the rows are turned into twos as well
            }
        }
    } 
    void makeRow2(vector<vector<int>>& M, int vIndex){ //make all in that row into 2s
        for( int j = 0; j < M.size(); j++){
            if (M.at(vIndex).at(j) == 1){
                M.at(vIndex).at(j) = 2;
                makeColumn2(M, j); // make sure the columns are turned into 2s as well
            }
        }
    } 
    int findCircleNum(vector<vector<int>>& M) {
        int count = 0;
        for(int i = 0; i < M.size(); i++){
            for (int j = 0; j < M.at(i).size(); j++ ){
                if(M.at(i).at(j) == 1){
                    count++;  
                    makeColumn2(M, j); // start the cycle
                }
            }
        }
        return count;
    }
};