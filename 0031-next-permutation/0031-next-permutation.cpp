class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // First step(finding the pivot element)
        int piv = -1, size = nums.size();
        for(int i = size-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv = i;
                break;
            }
        }

        if(piv == -1){
            reverse(nums.begin(),nums.end());
            return;

        }

        // 2nd Step(swapping with  the rightmost greater element)
        for(int j = size-1; j>piv;j--){
          if(nums[j]>nums[piv]){
            swap(nums[j],nums[piv]);
            break;
          }
        }
        


        int k = size -1;
        int p = piv+1;
       
            while(p<=k){
            swap(nums[p],nums[k]);
            k--;
            p++;

            }

          
        
 
              
              



        
    }
};