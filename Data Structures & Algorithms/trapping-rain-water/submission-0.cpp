class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> ans(n,0);
        vector<int> leftmax(n,0);
        vector<int> rightmax(n,0);
        leftmax[0]=0;
        rightmax[n-1]=0;
        for(int i=1;i<n-1;i++){
            leftmax[i]=max(leftmax[i-1],height[i-1]);
        }  
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],height[i+1]);
        }      
        for(int i=0;i<n-1;i++){
            int support=min(leftmax[i],rightmax[i]);
            if(support<height[i]){
                ans[i]=0;
            }
            if(support>height[i]){
                ans[i]=support-height[i];
            }
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=ans[i];
        }
        return sum;

    }
};
