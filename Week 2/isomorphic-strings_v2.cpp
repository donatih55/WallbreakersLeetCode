class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for (int i = 0; i < s.size(); i ++)
        {
            if (s.find(s[i]) != t.find(t[i]))
                return false; // if the next of the same char is not in the same position is because they are not isomorphic
        }
        return true;
    }
};