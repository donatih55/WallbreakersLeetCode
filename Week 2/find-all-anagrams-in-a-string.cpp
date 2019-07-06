class Solution {
public:
    
    bool isAnagram(unordered_map<char,long>& umap){
        unordered_map<char,long>::iterator it;
        for (it = umap.begin(); it != umap.end(); ++it){
            if(it->second != 0){
                return false;
            }
        }
        cout << endl;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, long> umap;
        vector<int> ret;
        //Add p to map
        for (int i = 0; i < p.length();i++){
            umap[p[i]]++;
        }
        //check first substring
        for (int i = 0; i < p.length();i++){
            if (umap.find(s[i]) != umap.end()){
                umap[s[i]]--;
            }
        }
        if (isAnagram(umap)){
            ret.push_back(0);
        }
        //incrementally check other substrings
        for (long i = 0, j = p.length(); j < s.length();i++, j++ ){
            if (umap.find(s[i]) != umap.end()){
                umap[s[i]]++;
            }
            if (umap.find(s[j]) != umap.end()){
                umap[s[j]]--;
            }
            if (isAnagram(umap)){
                ret.push_back(i+1);
            }
        }
        return ret;
    }
};