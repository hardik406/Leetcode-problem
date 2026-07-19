class Solution {
public:

    static bool cmp(pair<char,int> a, pair<char,int> b){
        return a.second>b.second;
    }

    string frequencySort(string s) {

        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        vector<pair<char,int>> v;

        for(auto x:mp){
            v.push_back(x);
        }

        sort(v.begin(),v.end(),cmp);

        string ans="";

        for(int i=0;i<v.size();i++){

            while(v[i].second>0){

                ans+=v[i].first;
                v[i].second--;
            }

        }

        return ans;
    }
};