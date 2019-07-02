class Solution {
public:
    string mod2 (string a){
        //sort %2 = 0
        for (int i = 0; i < a.length(); i += 2 ){
            for (int j = i; j < a.length(); j += 2){
                if (a[i] < a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
        //sort %2 = 1
        for (int i = 1; i < a.length(); i += 2 ){
            for (int j = i; j < a.length(); j += 2){
                if (a[i] < a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
        return a;
    }
    
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_map<string,int> distinctInput;
        // add each unique/sorted input to the table
        for (int i = 0; i < A.size(); i++){
            distinctInput[mod2(A[i])];
        }        
        return distinctInput.size();
    }
};