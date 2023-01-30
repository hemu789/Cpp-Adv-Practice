#include<bits/stdc++.h>
using namespace std;

int solveDp(vector<int> &nums, int n, vector<int> &dp){

    if(n<0){
        return 0;
    }

    if(n==0){
        return nums[0];
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    int incl=solveDp(nums,n-2,dp) + nums[n];
    int excl = solveDp(nums,n-1,dp);

    dp[n]=max(incl,excl);

    return dp[n];
}

int maxNonAdjacent(vector<int> &nums){

    int n=nums.size();

    vector<int> dp(n,-1);

    return solveDp(nums,n,dp);


}

int main(){

    vector<int> nums;
    nums.push_back(9);
    nums.push_back(9);
    nums.push_back(8);
    nums.push_back(2);


    int ans = maxNonAdjacent(nums);

    cout<<ans;

    return 0;
}