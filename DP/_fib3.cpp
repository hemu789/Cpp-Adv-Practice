// Space Optimization
//  Fib Series : 0 1 1 2 3 5 8 13
//`````      :  0 1 2 3 4 5 6 7 (n values)
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    
    int prev0=0; // first (prev2)
    int prev1=1; // Second

    for(int i=2;i<=n;i++){
        int curr= prev0 + prev1;

        //shift logic
        prev0=prev1;
        prev1=curr;

    }

    cout<<prev1;

    return 0;
}