class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int row = arr.size()-1 , col = arr[0].size()-1;


        int erow = row , ecol = col;
        int srow = 0 ,  scol = 0;

        vector<int> ans;

        while(srow <= erow && scol<=ecol){
            // Top
            for(int j = scol; j<=ecol; j++){
                ans.push_back(arr[srow][j]);
            }
             

            //  Right
            for(int i = srow+1; i<=erow ; i++){
                 ans.push_back(arr[i][ecol]);
                
            }
             

            // Bottom
            for(int j = ecol-1; j>=scol ; j--){
                if(srow == erow){
                break;
            }
                ans.push_back(arr[erow][j]);
                
             }
            

            // Left
            for(int i = erow - 1; i>=srow+1 ; i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(arr[i][scol]);
                 
            }
            

            srow++ ; scol++ ; ecol--; erow--;

        }

        return ans;
        



    }
};