class Solution {
public:
    bool isValidVector(vector<char>& v){
        set<char> unique;
        for (int i = 0; i <v.size(); i++){
            if (v[i] == '.'){
                continue; //don;t care about commas
            } else if(unique.find(v[i]) != unique.end()){
                return false;//vector is not valid if it has duplicate
            }else{
                unique.insert(v[i]); // add to the set so there isn't duplicates
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows
        for (int i = 0; i < board.size(); i++){
            if (!isValidVector(board[i])){
                return false;
            }
        }
        //check columns
        for (int i = 0; i < board.size(); i++){
            vector<char> temp;
            for (int j = 0; j < board[i].size(); j++){
                temp.push_back(board[j][i]);
            }
            if (!isValidVector(temp)){
                return false;
            }
        }
        //check squares
        for (int i = 0; i < board.size(); i+= 3){
            for (int j = 0; j < board[i].size(); j+= 3){
                vector<char> temp;
                temp.push_back(board[j][i]);
                temp.push_back(board[j][i+1]);
                temp.push_back(board[j][i+2]);
                temp.push_back(board[j+1][i]);
                temp.push_back(board[j+2][i]);
                temp.push_back(board[j+1][i+1]);
                temp.push_back(board[j+2][i+2]);
                temp.push_back(board[j+1][i+2]);
                temp.push_back(board[j+2][i+1]);
                if (!isValidVector(temp)){
                    return false;
                }
            }
        }
        return true;
    }
};