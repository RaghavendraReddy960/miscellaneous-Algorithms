#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs){
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>m;
    for(int i =0;i<strs.size();i++){
        
    }

    return ans;
}

int main(){
    vector<string>v{"eat","tea","tan","ate","nat","bat"};
    for(int i=0;i<v.size();i++){
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<1;i++){
        cout<<i;
    }
    cout<<v[0]<<v[1];
    return 0;
}