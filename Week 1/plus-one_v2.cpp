class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       for ( int i = digits.size() - 1; i >= 0; i--){
           if(digits.at(i) == 9){
               digits.at(i) = 0;
           }else{
               digits.at(i)++;
               return digits;
           }
       }
        digits.insert(digits.begin(), 1); // it will only get here if the first charcter in the vector was a 9!
        return digits;
    }
};