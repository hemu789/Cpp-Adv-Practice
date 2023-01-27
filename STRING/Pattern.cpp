#include<iostream>
using namespace std;

void PatternSearching(string &txt, string &pat){

    int m = pat.length();
    int n = txt.length();

    for(int i=0;i<=n-m;i++){ // n - m last ke sare check karega n me

         int j;

            for(int j=0;j<m;j++){
                if(pat[j]!=txt[i+j]){
                    break;
                }
            }

            if(j==m){
                cout<<i<<" ";
            }


    }
}
int main(){
    
    string txt= "abcabcd";
    string pat = "abcd";

    PatternSearching(txt,pat);
    return 0;
}