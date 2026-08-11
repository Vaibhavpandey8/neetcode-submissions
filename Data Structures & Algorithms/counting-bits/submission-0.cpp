class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        result.push_back(0);
        for(int i=1;i<=n;i++){
            int j=i;
            int count=0;
            while(j!=0){
                if(j&1)count++;
                j>>=1;
            }
            result.push_back(count);
        }
        return result;
    }
};
