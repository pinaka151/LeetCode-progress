class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& arr) {
        int row = arr.size() , col = arr[0].size();
        int scol = 0;
        int srow = 0;

        while(scol !=col){
            int MaxCol = INT_MIN;
            
            for(int i = 0; i<row; i++){
                MaxCol = max(MaxCol , arr[i][scol]);
            }

          srow = 0;
          while(srow!=row){
            int MinRow = INT_MAX;

            for(int j = 0; j<col;j++){
                MinRow = min(MinRow,arr[srow][j]);
            }

            if(MinRow == MaxCol){
                return {MinRow};
            }

            srow++;

            }
            

            scol++;
        }

       return {};
    }
};