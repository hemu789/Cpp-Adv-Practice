//given two strings

#include<bits/stdc++.h>

using namespace std;

bool check(string s1, string s2){

    int i = 0, j = 0;

    while (i < s1.size() && j<s2.size())
    {

        if (s2[j] == s1[i])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    return (s2.size()==j);
}

int main(){

    string s1= "geeksforgeeks";
    string s2="gfg";

    bool ans=check(s1,s2);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
    
    return 0;
}