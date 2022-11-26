#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string longestPalindrome(string s) {
int n = s.size();
int max = 1;
int start = 0;
bool mat[n][n];
for(int i=0;i<n;i++){
    mat[i][i]=true;
}
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        mat[i][i+1]=true;
        start = i;
        max = 2;
    }}
for(int k=3;k<=n;k++){
    for(int i=0;i<n-k+1;i++){
        int j = i+k-1;
        if((mat[i+1][j-1]) && (s[i]==s[j])){
            mat[i][j]=true;
            if(k>max){
                max = k;
                start = i;
            }
        }
    }
}

string ans = s.substr(start,max);
cout<<start<<max;
return ans;
}

int main(){
    string s = "bb";
    string k = longestPalindrome(s);
    cout<<k<<endl;
    return 0;
}