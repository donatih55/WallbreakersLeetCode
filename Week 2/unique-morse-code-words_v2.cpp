class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size() == 0){
            return 0;
        }
        unordered_map <string, int> umap;
        vector<string> morse {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; //a = 97
        for ( int i = 0; i < words.size(); i++){
            string temp = "";
            for(int j = 0; j < words.at(i).length(); j++){
                temp += morse.at(words.at(i).at(j) - 97);
            }
            umap[temp]; // replace word with morse version of it
        }
        return umap.size();
    }
};