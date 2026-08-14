class Solution {
public:
    void solve(int i, string& digits, string& temp,
               vector<string>& ans, string mp[]) {

        // Saare digits process ho gaye
        if (i == digits.size()) {
            ans.push_back(temp);
            return;
        }

        // Current digit ke corresponding letters
        string letters = mp[digits[i] - '0'];

        for (int j = 0; j < letters.size(); j++) {

            // Ek letter choose karo
            temp.push_back(letters[j]);

            // Next digit par jao
            solve(i + 1, digits, temp, ans, mp);

            // Backtrack
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.empty())
            return ans;

        string temp;

        string mp[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        solve(0, digits, temp, ans, mp);

        return ans;
    }
};