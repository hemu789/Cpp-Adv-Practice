#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int arr[]={10,10,2,1,2,1,10,5};

    unordered_map<int, int> m;

    for(int i:arr){
        m[i]++;
    }

    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}