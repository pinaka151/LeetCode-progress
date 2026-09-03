class Solution {
public:
    int search(vector<int>& A, int target) {
        int start = 0;
        int end = A.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;

            if(A[mid] == target){
                return mid;
            }


            if(A[start]<=A[mid]){//Left Sorted
                if(A[start]<=target && A[mid]>=target){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }

            }
            else{//Right Sorted

            if(A[mid]<=target && A[end]>=target){
                start = mid +1;
            }else{
                end = mid-1;
            }


            }



        }
  
        return -1;
    }
};