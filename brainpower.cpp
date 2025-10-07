class Solution {
public:

#define ll long long int

    ll dp[100005];

    ll recur(vector<vector<int>>&nums,int idx)
    {
        if(idx>=nums.size()) return 0;

        if(dp[idx]!=-1) return dp[idx];


        ll op1,op2;
        op1=op2=INT_MIN;

        op1=nums[idx][0]+recur(nums,idx+nums[idx][1]+1);

        op2=recur(nums,idx+1);
        return dp[idx]=max(op1,op2);
    }


    long long mostPoints(vector<vector<int>>& questions) {

        memset(dp,-1,sizeof(dp));

        return recur(questions,0);


        
    }
};
