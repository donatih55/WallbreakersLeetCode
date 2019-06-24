class Solution {
public:
    void reverseword(string& s, int begin, int end){
        end--;
        while(begin < end){
            swap(s.at(begin), s.at(end));
            begin++; end--;
        }
    }
    string reverseWords(string s) {
        int cursor = 0;
        for (int i = 0; i < s.length(); i++){
            if((int)s.at(i) == 32){
                reverseword(s, cursor, i);
                cursor = i + 1;
            }
        }
        reverseword(s, cursor, s.length());
        return s;
    }
};