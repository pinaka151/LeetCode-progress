class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int arr[row][col];

        for(int i  = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                arr[i][j] = mat[i][j];
            }
        }
        
        for(int i  = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                if(arr[i][j] == 0){
                    // Make entire row zero
                   for(int k = 0; k < col; k++) {
                        mat[i][k] = 0;
                    }

                    // Make entire column zero
                    for(int k = 0; k < row; k++) {
                        mat[k][j] = 0;
                    }

                }

            }


        }


        
    }
};