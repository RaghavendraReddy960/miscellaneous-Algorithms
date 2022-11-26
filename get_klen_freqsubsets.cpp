#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int>m;
    vector<string>ans;
    int len = words.size();
    for(int i=0;i<len;i++){
        m[words[i]]++;
    }
    
    for(auto x:m){
            ans.push_back(x.first);
           // cout<<x.second;
       
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x;
    }
    }


int main(){
    vector<string> words{"i","love","leetcode","i","love","coding","coding","a","a"};
    topKFrequent(words,2);
    return 0;
}