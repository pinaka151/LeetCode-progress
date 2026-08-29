class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        // vector<int> prefix(size,1);
        int prefix = 1;
        vector<int> ans(size,1);


        for(int i = 1; i<size;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }


        // vector<int> suffix(size,1);
        int suffix = 1;

        for(int j = size-2; j>=0;j--){
            suffix=suffix*nums[j+1];
            ans[j] = ans[j]*suffix;
        }

        
        return ans;
    }
};