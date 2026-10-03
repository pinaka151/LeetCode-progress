class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int reverse = 0;
        while(temp!=0){
            int rem = temp%10;
            if(reverse>INT_MAX/10 || reverse < INT_MIN/10){
                return 0;
            }
            reverse  = reverse*10 + rem;
            temp/=10; 
        }
        

        return reverse;
        
    }
};