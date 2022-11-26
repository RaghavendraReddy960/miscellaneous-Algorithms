#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stack>
using namespace std;

vector<string> tokenizer(string s){
     vector <string> tokens;
    stringstream check(s);
    string i;
    while(getline(check, i, ' '))
    {
        tokens.push_back(i);
    }
    return tokens;
}
vector<string> getOpen(vector<string> commands){
    int len = commands.size();
    stack<string> s;
    vector<string> ans;
    for(int i=0;i<len;i++){
        vector<string> temp = tokenizer(commands[i]);
        if(temp[0]=="open"){
            s.push(temp[1]);
        }
        else if(temp[0]=="close"){
            int k = temp.size();
            if(s.size()<=k){
                while(!s.empty()){
                    s.pop();
                }
            }
            else{
                for(int i=0;i<k;i++){
                    s.pop();
                }
            }
        }
        else{
             while(!s.empty()){
                    s.pop();
                }
        }
    }
    while(!s.empty()){
        ans.insert(ans.begin(),s.top());
        s.pop();
    }
    return ans;
}

int main(){
    vector<string> v{"open firfox", "open curl"};
    vector<string> ans;
    ans = getOpen(v);
    cout<<ans[0]<<ans[1];
    return 0;
}