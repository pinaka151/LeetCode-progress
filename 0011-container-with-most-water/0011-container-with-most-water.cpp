class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size()-1, ans = 0;
        while(lp<rp){
            int w = rp-lp;
            int h = min(height[rp],height[lp]);
            int area = w*h;
            ans = max(ans,area);

            height[lp]<height[rp]?lp++:rp--;


        }

        return ans;
        
    }
};