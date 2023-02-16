#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter no "<<endl;
    cin>>a;
      // multiply with k

    int b;
    cout<<"Enter another no" <<endl;
    cin>>b;

    int ans;
    

    for(int i=0;i<b;i++){
        ans = a << i;
    }

    // left shift b-1 time
    // a=5 b=2
    // 5 : 0 0 ----101
    // 2 : 0 0 ----010
    // ans:10: 
    // left shift a << b-1 times
    // 000 101
    //first left shift 0000  1010 (10 )
    // ans 
    cout<<ans;

    return 0;
}