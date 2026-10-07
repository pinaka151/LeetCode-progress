class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int row = arr.size();
        int sum = 0;
        for(int i = 0; i<row;i++){
            sum+=arr[i][i];
            sum+= arr[i][row-1-i];
        }
    
        if(row%2!=0){
            sum-=arr[row/2][row/2];
        }
        return sum;
            
        }
};