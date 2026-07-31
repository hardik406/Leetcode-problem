class Solution {
public:
    int minimumPushes(string word) {

        int cnt[26] = {0};

        // Count frequency of each character
        for (char ch : word) {
            cnt[ch - 'a']++;
        }

        // Sort frequencies in descending order
        sort(cnt, cnt + 26, greater<int>());

        int ans = 0;

        // Calculate total pushes
        for (int i = 0; i < 26; i++) {
            ans += cnt[i] * (i / 8 + 1);
        }

        return ans;
    }
};