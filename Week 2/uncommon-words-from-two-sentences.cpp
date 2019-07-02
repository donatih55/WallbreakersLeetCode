class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
       // these makes it easier to find the end of the word.
        A += " ";
        B += " "; 
        //map variables
        unordered_map<string, int> sentenceCounts;
        unordered_map<string,int>::iterator umapCursor;
        //variables we need throughout
        int cursor = 0;
        vector<string> ret;
        // Add first string to the map and count reocurrences
        for (int i = 0; i < A.length(); i++){
            if(A[i] == ' '){
                string currentWord = A.substr(cursor, i - cursor);
                if (cursor != i && sentenceCounts.find(currentWord)!= sentenceCounts.end()){
                    sentenceCounts[currentWord]++;
                }else{
                    sentenceCounts[currentWord] = 0;                   
                }
                cursor = i + 1;
            }
        }
        //do the same for the second string
        cursor = 0;
        for (int i = 0; i < B.length(); i++){
            if(B[i] == ' '){
                string currentWord = B.substr(cursor, i - cursor);
                if (cursor != i && sentenceCounts.find(currentWord)!= sentenceCounts.end()){
                    sentenceCounts[currentWord]++;
                }else{
                    sentenceCounts[currentWord] = 0;                   
                }
                cursor = i + 1;
            }
        }
        //add to vector the unique words
        for(umapCursor = sentenceCounts.begin(); umapCursor != sentenceCounts.end(); ++umapCursor  ){
            if(umapCursor->second == 0){
                ret.push_back(umapCursor->first);
            }
        }
        return ret;
    }
};