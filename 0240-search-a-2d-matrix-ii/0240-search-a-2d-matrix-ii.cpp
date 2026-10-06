class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int r = 0; int c = arr[0].size()-1; int m = arr.size();

        while(c>=0 && r<=m-1){
            if(arr[r][c]== target){
                return true;
            }
            else if(arr[r][c]>target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;

        
    }
};