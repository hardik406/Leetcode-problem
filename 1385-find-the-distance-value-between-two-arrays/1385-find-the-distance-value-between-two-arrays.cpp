class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;

        for (int x : arr1) {
            int cnt = 0;

            for (int y : arr2) {
                if (abs(x - y) > d) cnt++;
            }

            if (cnt == arr2.size()) ans++;
        }

        return ans;
    }
};