class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int> ans;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
           sum+=arr[i];
        }
        int m =q.size();
        for(int i=0;i<m;i++)
        {
            int val=q[i][0];
            int ind=q[i][1];
            if(arr[ind]%2==0)
            sum=sum-arr[ind];
            arr[ind]=arr[ind]+val;
            if(arr[ind]%2==0)
            {
               sum+=arr[ind];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
