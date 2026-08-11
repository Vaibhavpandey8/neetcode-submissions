class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int left=target-nums[i];
            if(mp.find(left)!=mp.end()){
                result.push_back(mp[left]);
                result.push_back(i);
                return result;
            }
            mp[nums[i]]=i;
        }
        return result;
    }
};
