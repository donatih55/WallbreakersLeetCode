class Solution {
public:
    bool wordPattern(string pattern, string str) {
        str+=" ";
        unordered_map<char,string> umap;
        unordered_map<char,string>::iterator it;
        set<string> s;
        int cursor = 0;
        //check string for pattern
        for(int i = 0; i < pattern.size(); i++){
            int nextSpace = str.find(' ', cursor);
             if ( nextSpace != string::npos){
                 if (umap.find(pattern[i])==umap.end() ){
                     if (s.find(str.substr(cursor, nextSpace - cursor))== s.end()){
                         // if it's not in the map and on set, add it
                         umap[pattern[i]] = str.substr(cursor, nextSpace - cursor);
                         s.insert(str.substr(cursor, nextSpace - cursor));
                     }else{
                         //if it's already on the set of strings, then return false
                         return false;
                     }
                 }else if (umap[pattern[i]].compare(str.substr(cursor, nextSpace - cursor)) != 0 ){
                     //if it already is on the map and doesn't match, return false
                     return false;
                 }
                cursor = nextSpace + 1;
            }else{
                 return false; // if string ends before pattern, is because pattern has more elements
            }
        }
        //if we didn't parse the whole string, it's because the string has more elements than 
        if (cursor < str.length()){
            return false;
        }
        
        //if not proven false until now, it's because it's true
        return true;
    }
};