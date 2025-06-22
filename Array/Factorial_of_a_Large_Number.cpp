class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int>ans;
        if(n==1||n==2)
        return {n};
        if(n==3)return {6};
        ans.push_back(1);
        for(int i=2;i<=n;i++)
        {
            long long carry=0;
            for(int j=0;j<ans.size();j++)
            {
                long long x=ans[j];
                long long currX=x*i+carry;
                long long val=currX%10;
                carry=currX/10;
                ans[j]=val;
               
            }
             while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
