class Solution {
public:
    int firstUniqChar(string s) {

        map<char,int> m;
        for(auto p: s){
            m[p] = m[p]+1;
        }

        for(int i = 0; i<s.size();i++){
            if(m[s[i]] == 1){
                return i;
            }
        }

        return -1;
        
    }
};