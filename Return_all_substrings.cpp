#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void rec(string s,vector<string> &ans,int i,string v){
    if(i==s.size()){
        ans.push_back(v);
        return;
    }
    rec(s,ans,i+1,v);
    rec(s,ans,i+1,s[i]+v);
}


int main(){
    vector<string> ans;
    string s = "ABC";
    string v="";
    rec(s,ans,0,v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}