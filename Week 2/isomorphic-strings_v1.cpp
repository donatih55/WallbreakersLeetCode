class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /*if (s.size() == 0 || s.size() != t.size()){
            return false;
        }*/
        unordered_map<char,int> occurences;
        int cursor = 0;
        //make first string into occurances #s
        for (int i = 0; i < s.size(); i++){
            if (occurences.find(s[i]) == occurences.end()){
                occurences[s[i]] = cursor;
                s[i] = cursor;
                cursor++;
            }else{
                s[i] = occurences[s[i]];
            }
        }
        //do the same for second string
        occurences.clear();
        cursor = 0;
        for (int i = 0; i < t.size(); i++){
            if (occurences.find(t[i]) == occurences.end()){
                occurences[t[i]] = cursor;
                t[i] = cursor;
                cursor++;
            }else{
                t[i] = occurences[t[i]];
            }
        }
        return !s.compare(t);
    }
};