class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int lsum = 0;
        int rsum = 0;

        // First k cards from left
        for(int i = 0; i < k; i++) {
            lsum += cardPoints[i];
        }

        int maxSum = lsum;
        int right = n - 1;

        // Replace left cards with right cards one by one
        for(int i = k - 1; i >= 0; i--) {

            lsum -= cardPoints[i];
            rsum += cardPoints[right];
            right--;

            maxSum = max(maxSum, lsum + rsum);
        }

        return maxSum;
    }
};