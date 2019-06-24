class Solution {
public:
    string reverseVowels(string s) {
        int begin = 0, end = s.length() -1;
        int vowels[] = {97,101,105,111,117}; //lowercase vowels
        while (begin < end){
            if(find(vowels,vowels+5,tolower(s.at(begin))) == vowels+5){
                begin++;
                continue;
            }
            if(find(vowels,vowels+5,tolower(s.at(end))) == vowels+5){
                end--;
                continue;
            }
            swap(s.at(begin),s.at(end));
            begin++;end--;
        }
        return s;
    }
};