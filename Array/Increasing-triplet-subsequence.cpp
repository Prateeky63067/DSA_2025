class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1=INT_MAX,num2=INT_MAX,num3;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num3=nums[i];
            if(num3<=num1)
            {
                num1=num3;
                continue;
            }
            if(num3<=num2){
                num2=num3;
                continue;
            }
            return true;
        }
        return false;
    }
};
