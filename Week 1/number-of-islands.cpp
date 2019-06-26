class Solution {
public:
    void makeIsland2(vector<vector<char>>& grid, int i, int j){
        if(grid.at(i).at(j) == '1'){
            grid.at(i).at(j) = 2; // if it is a 1, make it into a two so we don't count this one again
            if(i + 1 < grid.size()){
                makeIsland2(grid, i + 1, j); //checks below
            }
            if(j + 1 < grid.at(i).size()){
                makeIsland2(grid, i, j + 1); // checks to the right
            }
            if(i - 1 >= 0){
                makeIsland2(grid, i - 1, j); // checks above
            }
            if(j - 1 >= 0){
                makeIsland2(grid, i, j - 1); // checks to the left
            }
        }
    } 
        
    int numIslands(vector<vector<char>>& grid) {
                int count = 0;
        for(int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid.at(i).size(); j++ ){
                if(grid.at(i).at(j) == '1'){
                    count++;  //if found a 1 count as an island because we'll change them to 2
                    makeIsland2(grid, i, j); // start recursion
                }
            }
        }
        return count;
    }
};