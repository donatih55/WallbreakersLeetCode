class Solution {
public:
    void makeFriends(vector<bool>& isInFriendGroup, vector<vector<int>>& M, int i){
        if (!(isInFriendGroup.at(i))){
            isInFriendGroup.at(i) = true;
            for(int j = 0; j < M.size(); j++){
               if(M.at(i).at(j) == 1){
                   makeFriends(isInFriendGroup, M , j);
               }
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& M) {
        vector<bool> isInFriendGroup (M.size(), false);
        int count = 0;
        for(int i = 0; i < M.size(); i++){
            if(!(isInFriendGroup.at(i))){
                count++;  
                makeFriends(isInFriendGroup, M , i);
            }
        }
        return count;
    }
};