class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> charCount (26,0);//26 zeros, 26 letters of the alphabet
        for (int i = 0; i < s.length(); i++){
            charCount.at(s.at(i)-97)++; //97 = a in ascii // count how many of each letter
        }
        for (int i = 0; i < t.length(); i++){
            charCount.at(t.at(i)-97)--; //97 = a in ascii // subtract one for each letter
        }
        for (int i = 0; i < charCount.size(); i++){
            if(charCount.at(i) != 0){
                return false; // if the counts don't match is because one string has one char different from the other
            }
        }
        return true;
    }
};