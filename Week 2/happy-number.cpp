class Solution {
public:
    int sumSquares(int i){
        int ret = 0;
        while (i > 0){
            ret += (pow(i%10, 2));
            i /= 10;
        }
        return ret;
    } //sums and returns
    bool isHappy(int n) {
        unordered_map<int,int> umap;
        do{
            umap[n];
            n = sumSquares(n);
        }while(n != 1 && umap.find(n) == umap.end()); //while it hasn't looped nor reached  1
    return n == 1;
    }
};