class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(k--){
            int element=INT_MIN;
            int maxfreq=INT_MIN;
            for(int i=0;i<nums.size();i++){
                if(mp[nums[i]] > maxfreq){
                    maxfreq=mp[nums[i]];
                    element=nums[i];
                }
            }
            mp.erase(element);
            result.push_back(element);      
        }
        return result;
    }
};
