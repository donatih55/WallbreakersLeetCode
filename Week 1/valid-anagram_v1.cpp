class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        for (int i = 0; i < s.length(); i++){
            for (int j = 0; j < t.length(); j++){
                if(s.at(i) == t.at(j)){
                    s.erase(s.begin() + i);
                    t.erase(t.begin() + j);
                    i--;
                    j--;
                    break;
                }
            }
        }
        return s.length() == 0;
    }
};