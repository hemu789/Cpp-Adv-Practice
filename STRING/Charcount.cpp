#include<bits/stdc++.h>

using namespace std;

int main(){

    string s= "geeksforgeeks";

    int count[26]={0};

    for(int i=0;i<s.size();i++){
        count[s[i]-'a']++;  //  s[i]= g -a //6
    }


    for(int i=0;i<26;i++){
       if(count[i]>0){
        cout<<char(i+'a')<<" "<<count[i]<<endl;  // i=0 +a = a
       }
    }
    return 0;   
}