class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size,1);
        vector<int> ans;


        for(int i = 1; i<size;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }


        vector<int> suffix(size,1);

        for(int j = size-2; j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j+1];
        }

        for(int i = 0;i<size;i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }
};