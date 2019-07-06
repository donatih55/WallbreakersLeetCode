class Solution {
public:
    char findMax(unordered_map<char,int>& u){
        unordered_map<char,int>::iterator it;
        unordered_map<char,int>::iterator max = u.begin();
        for (it = u.begin(); it != u.end(); ++it){
            if (max->second < it->second){
                max = it;
            }
        }
        return max->first;
    }
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        string ret="";
        //add it all to a map
        for (int i=0; i < s.length(); i++){
            umap[s[i]]++;
        }
        //add letter by letter to the return string
        while (umap.size() > 0){
            char max = findMax(umap); //get the highest one
            for(int i = 0; i < umap[max]; i++){
                ret+= max;
            }
            umap.erase(max);
        }
        return ret;
    }
};