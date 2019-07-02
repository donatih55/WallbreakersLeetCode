class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int> distinctCandiesCount;
        //add the candy to the map and increment count if it is already there
        for (int i = 0; i < candies.size(); i++){
            if (distinctCandiesCount.find(candies.at(i)) != distinctCandiesCount.end()){
                distinctCandiesCount[candies.at(i)]++;
            }else{
                distinctCandiesCount[candies.at(i)] = 1;
            }
        }
        // if there's more types of candies than types to give to the kids return the max candy a kid can get, else, return the distinct types.
        if (distinctCandiesCount.size() > candies.size()/2){
            return candies.size()/2;
        }else{
            return distinctCandiesCount.size();
        }
    }
};