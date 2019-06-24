class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0, end = s.length() - 1;
        while(begin < end){
// if either the start of end cursors are not a number/letter, just move them and skip this iteration
            if (!isalnum(s.at(begin)) ){ 
                begin++;
                continue;
            }
            if (!isalnum(s.at(end))){
                end--;
                continue;
            }
// If they don;t match, it's because it is not a polindrome
            if (tolower(s.at(begin)) != tolower(s.at(end))){
                return false;
            } 
            begin++;
            end--;
        }
        return true; // if they all match, it is a palindrome
    }
};