class Solution {
public:
    int SumOfIndex(int n){
        int sum = 0;
        while(n!=0){
        int rem = n%10;
        sum+=rem;

        n/=10;

        }
        return sum;

    }
    
    int smallestIndex(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i<size;i++){
            if(i == SumOfIndex(nums[i])){
                return i;
            }
        }

        return -1;
        
    }
};