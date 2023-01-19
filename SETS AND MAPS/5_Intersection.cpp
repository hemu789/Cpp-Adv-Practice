
#include<bits/stdc++.h>

using namespace std;

int main(){
// Leetcode 349
int res=0;

int a[4]={1,2,2,1};
int b[3]={2,2,1};

unordered_set<int>s;

for(int i=0;i<4;i++){
    s.insert(a[i]);
}

for(int j=0;j<3;j++){
    if(s.find(b[j])!= s.end()){
        res++;
        s.erase(b[j]);

    }
}

cout<<res;


return 0;

}