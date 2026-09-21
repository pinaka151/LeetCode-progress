class Solution {
public:

    bool isValid(vector<int>& position,int n, int m, int mid){
        int ball = 1 , lastMagnetPosition = position[0];

        for(int i = 0; i<n ; i++){
            if(position[i] - lastMagnetPosition >= mid){
                ball ++;
                lastMagnetPosition = position[i];

            }
            if(ball == m){
                return true;
            }
        }

        return false;

    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();


        int start = 1;
        int end = position[n-1] - position[0];
         
        int ans = 0; 
        while(start<=end){
            int  mid = start + (end-start)/2;
            if(isValid(position,n, m, mid)){
                ans = mid;
                start = mid + 1;

            }
            else{
                end = mid -1;
            }
           
        }

        
         return ans;
    }
};