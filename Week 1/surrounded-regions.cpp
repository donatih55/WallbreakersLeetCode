class Solution {
public:        
    void connectedToBorderToP(vector<vector<char>>& board, int i, int j){
        if(board.at(i).at(j) == 'O'){
            board.at(i).at(j) = 'P';
            if(i + 1 < board.size()){
                connectedToBorderToP(board, i + 1, j); //checks below
            }
            if(j + 1 < board.at(i).size()){
                connectedToBorderToP(board, i, j + 1); // checks to the right
            }
            if(i - 1 >= 0){
                connectedToBorderToP(board, i - 1, j); // checks above
            }
            if(j - 1 >= 0){
                connectedToBorderToP(board, i, j - 1); // checks to the left
            }
        }
    };
    
    void solve(vector<vector<char>>& board) {
        if (!board.empty()){ // if the bord is not empty
            int boardHeight = board.size();
            int boardLength = board.at(0).size();
            //Scan the borders for Os and call function
            // left and right border
            for (int i = 0; i < boardHeight; i++){
                if( board.at(i).at(0) == 'O'){
                    connectedToBorderToP(board, i, 0);
                }
                if (board.at(i).at(boardLength-1) == 'O'){
                    connectedToBorderToP(board, i, boardLength-1);
                }
            }
            // top and bottom border
            for (int j = 0; j < boardLength; j++){
                if(board.at(0).at(j) == 'O' ){
                    connectedToBorderToP(board, 0, j);
                }
                if (board.at(boardHeight-1).at(j) == 'O'){
                    connectedToBorderToP(board, boardHeight-1, j);
                }
            }
            //switch Os for Xs and Ps for Os
            for(int i = 0; i < boardHeight; i++){
                for (int j = 0; j < boardLength; j++ ){
                   if(board.at(i).at(j) == 'O'){
                        board.at(i).at(j) = 'X';
                   }else if (board.at(i).at(j) == 'P'){
                        board.at(i).at(j) = 'O';
                   }
                }
            }
        }
    }
};