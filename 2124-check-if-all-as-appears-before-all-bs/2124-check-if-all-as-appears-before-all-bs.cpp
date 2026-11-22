
class Solution {
public:
    bool checkString(string s) {
        int flag = 1;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == 'a') {
                if (flag == 0) return false;
            }

            if (s[i] == 'b') {
                flag = 0;
            }

            i++;
        }

        return true;
    }
};
