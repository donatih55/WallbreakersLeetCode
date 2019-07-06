class Solution {
public:
    bool isBanned(vector<string>& banned, string a){
        for(int i = 0; i < banned.size(); i++){
            if (banned[i].compare(a) == 0){
                return true;
            }
        }
        return false;
    }
    string tolowercus(string a){
        for (int i = 0; i < a.length(); i++){
            a[i] = tolower(a[i]);
        }
        return a;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        paragraph += " ";
        unordered_map<string,int> wordCount;
        int max = -1;
        string maxString = "";
        int cursor = 0;
        while(cursor != string::npos){
            if (paragraph[cursor] == ' '){
                cursor++;
            }
            int nextSpace = paragraph.find(' ', cursor);
            int eow = paragraph.find_first_of(" ,.!?;:\"\'()[]{}", cursor); //end of word
            wordCount[tolowercus(paragraph.substr(cursor,eow-cursor))]++;
            cursor = nextSpace;
        }
        for (unordered_map<string,int>::iterator it = wordCount.begin(); it != wordCount.end(); ++it){
            if(max <= it->second && !isBanned(banned, it->first)){
                max = it->second;
                maxString = it->first;
            }
        }
        return maxString;
    }
};