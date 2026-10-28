class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n  = nums.size();
        vector <int> ps(n,0);
        int output = 0;

        ps[0] = nums[0];
        for(int i = 1; i<n;i++){
            ps[i] = ps[i-1] + nums[i];
        }

        unordered_map <int,int> s;

        for(int j = 0; j<n; j++){
            if(ps[j] == k){
                output++;
            }

            if(s.find(ps[j]-k) !=s.end()){
                output += s[ps[j]-k];
            }
           s[ps[j]]++;
        }

        return output;
    }
};