class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set <int> s;
        int n = grid.size();
        int size = n*n;
        int a ,b;

        int sum = size*(size+1)/2;
        int actualSum = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n;j++){
                // Duplicate value
                if(s.find(grid[i][j])!=s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }else{
                s.insert(grid[i][j]);
                }
                // Missing value
                actualSum += grid[i][j];
            }

        }

        // Missing Value
        b =  sum - (actualSum - a);
        ans.push_back(b);
        
        return ans;
    }
};