class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,1);

        int leftproduct = 1;
        for(int i=0;i<n;i++){
            res[i]=leftproduct;
            leftproduct*=nums[i];
        }

        int rightProduct = 1;
        for(int i =n-1;i>=0;i--){
            res[i]*=rightProduct;
            rightProduct*=nums[i];
        }
        return res;
    }
};
