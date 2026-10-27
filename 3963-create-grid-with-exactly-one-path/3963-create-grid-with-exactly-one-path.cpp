class Solution {
public:
vector<string> makeGrid(int m,int n,vector<string> nums){
     for(int i=0;i<m;i++){
        nums[i][0] = '.';
     }
     for(int j=0;j<n;j++){
        nums[m-1][j]= '.';
     }
     return nums;
    
}
    vector<string> createGrid(int m, int n) {
        vector<string> nums(m,string(n,'#'));
        return makeGrid(m,n,nums);
    }
};