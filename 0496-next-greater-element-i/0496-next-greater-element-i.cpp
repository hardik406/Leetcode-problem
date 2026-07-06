class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n =nums2.size();
        int m = nums1.size();
        vector<int> arr(n);

        for( int i = n-1 ; i>=0 ; i--){
            while(!st.empty() && st.top()<=nums2[i] ){
                st.pop();
            }

            if(st.empty()){
                arr[i] = -1;
            }
            else{
                arr[i] = st.top();
            }
            st.push(nums2[i]);
        }
        unordered_map<int,int> mp;
for(int i=0;i<n;i++){
    mp[nums2[i]] = arr[i];
}

vector<int> ans;
for(int x : nums1){
    ans.push_back(mp[x]);
}
return ans;
    }
};