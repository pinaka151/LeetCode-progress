class Solution {
public:
    bool isValid(vector<int>& weights , int days , int mid){
        int dayNumber = 1;
        int weightCount = 0;
        for(int i = 0; i <weights.size();i++){
            if(weights[i]>mid){
                return false;
            }
            else if(weightCount + weights[i] <= mid){
                weightCount +=weights[i];
            }
            else{
                dayNumber++;
                weightCount = weights[i];
            }
        }
        return dayNumber > days ? false:true;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int start = 0;
        int sum = 0;
        for(int i =0 ; i<weights.size(); i++){
            sum += weights[i];
        }

        int end  = sum;

        int  ans = -1;
        while(start <= end){

            int  mid = start + (end - start)/2;
            if(isValid(weights,days,mid)){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid+1;
            }


        }

        return ans;
    }
};