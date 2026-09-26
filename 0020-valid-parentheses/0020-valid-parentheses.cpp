class Solution {
public:
    bool isValid(string s) {
     stack<char> brac;

     for(char val: s){
         if((val == '{' || val == '[' )|| val == '('){
            brac.push(val);
         }
         else{
            if(brac.empty()){
                return false;
            }
            char top = brac.top();
            brac.pop();

            if(val == ')' && top != '('){
                return false;
            }
            if(val == '}' && top != '{'){
                return false;
            }
            if(val == ']' && top != '['){
                return false;
            }
            
         }

         
     }

       return brac.empty();
        
    }
};