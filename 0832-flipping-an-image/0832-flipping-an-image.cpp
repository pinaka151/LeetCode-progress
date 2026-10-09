class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &row : image){
            for(auto &elem : row){
                elem = 1-elem;
            }
            reverse(row.begin(),row.end());
        }

        return image;
    }
};