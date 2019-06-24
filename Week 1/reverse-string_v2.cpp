class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0; i < (s.size())/2; i ++ ){
	// ^ 3 times and it does the trick instead of the temp variable
            s.at(i) = s.at(i) ^ s.at(s.size() - 1 - i);
            s.at(s.size() - 1 - i) =  s.at(i) ^ s.at(s.size() - 1 - i);
            s.at(i) = s.at(i) ^ s.at(s.size() - 1 - i);
        }
    }
};