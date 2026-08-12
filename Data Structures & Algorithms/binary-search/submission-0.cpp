class Solution {
public:
    int search(vector<int>& nums, int target) {
        int result=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(nums[mid]==target){
                result=mid;
                break;
            }
            else if(nums[mid]>target)
            end=mid-1;
            else
            start=mid+1;
        }
        return result;
    }
};
