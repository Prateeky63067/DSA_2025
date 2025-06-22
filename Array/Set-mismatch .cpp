class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         vector<int> ans;
         int n=nums.size();
         vector<int>arr(n+1,0);
         for(int i=0;i<n;i++)
         {
            if(arr[nums[i]]==-1)
            {
                ans.push_back(nums[i]);
            }
            arr[nums[i]]=-1;
         }
         for(int i=1;i<arr.size();i++)
         {
            if(arr[i]==0)
            {
                ans.push_back(i);
            }
         }
         return ans;
    }
};
