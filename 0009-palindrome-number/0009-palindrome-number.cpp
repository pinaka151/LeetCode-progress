class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int remainder = 0;
        long  reverse = 0;
        if(temp <0){
            return false;
        }
        while(temp!=0){
            remainder = temp%10;
            reverse = reverse*10 + remainder;
            temp /= 10;
        }
        if(reverse == x){
            return true;
        }else{
            return false;
        }
        
    }
};