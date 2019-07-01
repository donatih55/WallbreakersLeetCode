class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size() == 0){
            return 0;
        }
        vector<string> morse {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; //a = 97
        for ( int i = 0; i < words.size(); i++){
            string temp = "";
            for(int j = 0; j < words.at(i).length(); j++){
                temp += morse.at(words.at(i).at(j) - 97);
            }
            words.at(i) = temp; // replace word with morse version of it
        }
        sort(words.begin(),words.end()); // sort and compare
        for (int i = 0; i < words.size() - 1; i++){
            if (words.at(i).compare(words.at(i+1))==0){
                words.erase(words.begin()+i+1);
                i--;
            }
        }
        return words.size();
    }
};