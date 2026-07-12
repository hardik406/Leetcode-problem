class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<int,int> mp;
        int left=0;
        int count =0;

        for(int right=0;right<s.size();right++){
            mp[s[right]]++;

            while(mp['a']&&mp['b']&&mp['c']){
                count = count+s.size()-right;

                mp[s[left]]--;
                left++;
            }
        }
        return count;
    }
};