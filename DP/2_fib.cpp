//Bottom Up ->Tabulation(Itterative)

// Fib Series : 0 1 1 2 3 5 8 13
//`````      :  0 1 2 3 4 5 6 7 (n values)

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> dp(n+1);

    dp[0]=0;

    dp[1]=1;

    for(int i=2;i<=n;i++){

        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    
    return 0;
}