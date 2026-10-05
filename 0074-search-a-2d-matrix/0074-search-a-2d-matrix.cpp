class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        // BS on total no of rows
        int m = arr.size(), n = arr[0].size();

        int str = 0; int end = m-1;
        while(str<=end){
            int mid = str + (end-str)/2;

            if(arr[mid][0]<=target && arr[mid][n-1]>=target){
                // Found the row
                int str2 = 0 , end2 = n-1;

                while(str2<=end2){
                    int mid2 = str2 + (end2-str2)/2;

                    if(arr[mid][mid2]>target){
                        end2 = mid2 -1;
                    }
                    else if(arr[mid][mid2]<target){
                        str2 = mid2 +1;
                    }
                    else if(arr[mid][mid2] == target){
                        return true;
                    }
                }
                return false;
            }
            else if(arr[mid][n-1]<target){
                str = mid+1;
            }
            else if(arr[mid][0]>target){
                end = mid-1;
            }
        }
        return false;
    }
};