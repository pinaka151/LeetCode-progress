class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> Vect(2*size,0);

        for(int i  = 0; i<size; i++){
            Vect[i] = nums[i];
            Vect[size + i] = nums[i];
        }
        
        return Vect;
    }
};