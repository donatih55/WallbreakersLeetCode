class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = INT_MAX;
        string ret = "";
        if(strs.size() == 0){ // empty vector return nothing (wasn't expecting this input...)
            return ret;
        }
        for (int i = 0; i < strs.size(); i++){ // get the smallest string size;
            if (minSize > strs.at(i).length()){
                minSize = strs.at(i).length();
            }
        }
        for (int i = 0; i < minSize; i++){ // goes through each letter up to the smallest string size
            char charAtHand = strs.at(0).at(i);
            for(int j = 0; j < strs.size(); j++){ // goes through that letter in each string
                if (charAtHand != strs.at(j).at(i)){ // if it doesn;t match, return everything that matched so far
                    return ret;
                }
            }
            ret += charAtHand; //if it matched on all three strings, add it to the return string
        }
        return ret;
    }
};