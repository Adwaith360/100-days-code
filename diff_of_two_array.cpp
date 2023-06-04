class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<vector<int>> v(2);
        for(auto &i: nums1){
            if(mp.count(i)==0)mp[i]++;
        }
        for(auto &i: nums2){
            if(mp.count(i)){
                if(mp[i])mp[i]--;
            }else{
                mp[i]--;
            }
        }
        for(auto &i: mp){
            if(i.second>0)v[0].push_back(i.first);
            else if(i.second<0) v[1].push_back(i.first);
        }
        return v;
    }
};