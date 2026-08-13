class Solution {
public:
    int countValidPrefixes(string s) {
        int zero =0;
        int one = 0;
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
            }
            else if(s[i]=='1'){
                one++;
            }
            if(abs(zero-one)<=1) count++;
        }
        return count;
    }
};