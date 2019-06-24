class Solution {
public:

bool isMixedCase(string w){
        // 97 is lowercase a in ASCII
        bool isCap = (int)w.at(0) < 96; // true for cap, false for lower
        for (int i = 1; i < w.size(); i++){
            bool temp = (int)w.at(i) < 96 ;
            if (isCap ^ temp ){ // If at any point one is different than the other, then it is mixed case
                return true;
            }
        }
        return false;
    }
 bool detectCapitalUse(string word) {
        if (isMixedCase(word)){ // if it is mixed case we need to look further
            if ((int)word.at(0) > 96){ // if it starts with a lowecase letter and is mixed case, then it's wrong
                return false;
            }
            for (int i = 1; i < word.size(); i++){ // if any other letter is upper case along the way, then it is wrong.
                if((int)word.at(i) < 96){
                    return false;
                }
            }
        }
        return true; // if it's not mixed case then we are good
    }
};