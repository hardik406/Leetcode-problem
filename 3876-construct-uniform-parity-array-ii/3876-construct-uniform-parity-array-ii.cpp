class Solution { 
public: 
    bool uniformArray(vector<int>& nums1) { 
        
        int mn = *min_element(nums1.begin(), nums1.end());

        // Agar minimum odd hai, sabko odd banaya ja sakta hai
        if (mn % 2 != 0) {
            return true;
        }

        // Minimum even hai, to koi odd element hua
        // to usko even banana possible nahi
        for (int x : nums1) {
            if (x % 2 != 0) {
                return false;
            }
        }

        return true;
    } 
};