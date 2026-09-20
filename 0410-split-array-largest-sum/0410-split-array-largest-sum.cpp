class Solution {
public:
    bool isValid(vector<int>& nums, int k , int mid){
        int number = 0;
        int subArray = 1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]>mid){
                return false;
            }
            else if(number + nums[i]<=mid){
                number +=nums[i];
            }
            else{
                subArray++;
                number = nums[i];
            }
        }


      return subArray > k ? false : true;
    }


    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int sum = 0;
        for(int i =0; i<nums.size();i++){
            sum += nums[i];
        }

        int end = sum;

        
        int ans = -1;
        while(start<=end){
            int mid = start + (end - start)/2;

            if(isValid(nums , k , mid)){
                ans  = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;
            }

        }

        return ans;
        
    }
};