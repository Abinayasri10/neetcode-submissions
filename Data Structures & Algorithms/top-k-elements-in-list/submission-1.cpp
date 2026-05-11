class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<int> res;
        
        while(k--){
            int maxi = 0;
            int ele;
        for(auto it:mp){
            if(it.second>maxi){
                maxi = it.second;
                ele = it.first;
            }
        }
            res.push_back(ele);
            mp.erase(ele);
        
    }
        return res;
    }
};
