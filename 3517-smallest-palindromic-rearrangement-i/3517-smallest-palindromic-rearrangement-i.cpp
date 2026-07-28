class Solution {
public:
    string smallestPalindrome(string s) {

        // Frequency count of each character
        vector<int> cnt(26, 0);

        for (char ch : s) {
            cnt[ch - 'a']++;
        }

        string left = "";
        char mid = '\0';

        // Build the left half and find the middle character (if any)
        for (int i = 0; i < 26; i++) {

            // Add half of the occurrences to the left part
            left.append(cnt[i] / 2, char('a' + i));

            // If frequency is odd, this character goes in the middle
            if (cnt[i] % 2 == 1) {
                mid = char('a' + i);
            }
        }

        // Right half is just the reverse of the left half
        string right = left;
        reverse(right.begin(), right.end());

        // If there is no middle character
        if (mid == '\0') {
            return left + right;
        }

        // Otherwise place the middle character between left and right
        return left + string(1, mid) + right;
    }
};