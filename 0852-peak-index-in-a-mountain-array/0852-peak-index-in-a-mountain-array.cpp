class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int size = arr.size();
        int peak = INT_MIN;
        int index = 0;
        for(int i = 0; i<size;i++){
            if(arr[i]>peak){
                peak = arr[i];
                index = i;
            }


        }
        return index;

        
    }
};