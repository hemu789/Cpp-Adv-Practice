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

    cout<<ans;

    return 0;
}