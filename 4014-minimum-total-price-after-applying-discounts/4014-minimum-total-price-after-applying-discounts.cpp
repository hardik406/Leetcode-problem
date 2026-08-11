class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.begin(), prices.end(), greater<int>());
        sort(discounts.begin(), discounts.end(), greater<int>());

        int n = min(prices.size(), discounts.size());

        double ans = 0;

        // Apply discounts to the largest prices
        for (int i = 0; i < n; i++) {
            ans += prices[i] * (100.0 - discounts[i]) / 100.0;
        }

        // Prices which didn't get any discount
        for (int i = n; i < prices.size(); i++) {
            ans += prices[i];
        }

        return ans;
    }
};