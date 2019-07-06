class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> ret;
        unordered_map<string,int> umap;
        //populate umap with #s and strings
        for (int i = 0; i < cpdomains.size(); i ++ ){
            int firstSpace = cpdomains[i].find(' ');
            int num = stoi(cpdomains[i].substr(0,firstSpace)); // get the number
            int cursor = firstSpace + 1;
            while(cursor != string::npos){ //split the string
                if (cpdomains[i][cursor] == '.'){
                    cursor++;
                }
                umap[cpdomains[i].substr(cursor, cpdomains[i].size() - cursor)] += num; // sum the number to the possibly already existing number for each string
                 cursor = cpdomains[i].find('.', cursor + 1);
            }
        }
         //move everything to the vector
        for (unordered_map<string,int>::iterator it = umap.begin(); it != umap.end(); ++it ){
            ret.push_back(to_string(it->second) + " " + it->first);
        }
        
        return ret;
    }
};