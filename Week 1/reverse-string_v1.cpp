class Solution {
public:
    void reverseString(vector<char>& s) {
        int last = s.size() -1;
        for(int i = 0; i < (last + 1)/2; i ++ ){
            char temp;
            temp = s.at(i);
            s.at(i) = s.at(last - i);
            s.at(last - i) = temp;
        }
    }
};