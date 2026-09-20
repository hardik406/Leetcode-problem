class Solution {
public:
    int reverseDegree(string s) {
        int arr[26];
        int ans = 0;

        for(int i = 0; i < 26; i++) {
            arr[i] = 26 - i;
        }

        for(int i = 0; i < s.size(); i++) {
            ans += (i + 1) * arr[s[i] - 'a'];
        }

        return ans;
    }
};