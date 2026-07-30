class Solution {
public:
    int minimumPushes(string word) {

        if (word.size() <= 8)
            return word.size();

        else if (word.size() <= 16)
            return 8 + 2 * (word.size() - 8);

        else if (word.size() <= 24)
            return 8 + 16 + 3 * (word.size() - 16);

        else
            return 8 + 16 + 24 + 4 * (word.size() - 24);
    }
};