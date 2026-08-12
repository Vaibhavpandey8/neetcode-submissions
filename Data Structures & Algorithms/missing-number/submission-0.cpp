class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int sum=(size*(size+1))/2;
        int arrsum=0;
        for(int i=0;i<size;i++){
            arrsum=arrsum+nums[i];
        }
        return sum-arrsum;
        
    }
};
