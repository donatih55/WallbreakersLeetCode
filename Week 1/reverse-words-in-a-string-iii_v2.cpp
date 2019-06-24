class Solution {
//after I found out there's a reverse function for vectors
public:
    string reverseWords(string s) {
        int cursor = 0;
        for (int i = 0; i < s.length(); i++){
            if((int)s.at(i) == 32){
                reverse(s.begin() + cursor, s.begin() + i);
                cursor = i + 1;
            }
        }
        reverse(s.begin() + cursor, s.end());
        return s;
    }
};