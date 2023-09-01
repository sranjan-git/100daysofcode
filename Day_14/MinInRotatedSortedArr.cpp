class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mul = *max_element(nums.begin(),nums.end());
        int mul1 = nums[0];

        if(mul1 == 0) mul1 = 1;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                mul1 = 1;
                continue;
            }
            mul1 = mul1*nums[i];
            if(mul1>mul)
            {
                mul = mul1;
            }
        }

        mul1 = nums[nums.size()-1];
        if(mul1 == 0) mul1 = 1;
        for(int i =nums.size()-2 ;i>=0;i--)
        {
            if(nums[i] == 0)
            {
                mul1 = 1;
                continue;
            }
            mul1 = mul1 * nums[i];
            if(mul1>mul)
            {
                mul = mul1;
            }
        }
        return mul;
    }
};
