#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void count(string v, int k,int n, string &ans){
    if(k==n){
        ans = v;
    }
    int c =1;
    string t;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i+1]){
            c++;
        }
        else{
            t = t+to_string(c);
            c=1;
            t = t+v[i];
        }
        count(t,k+1,n,ans);
        cout<<t;
    }
}
string countAndSay(int n) {
    string ans;
    if(n==1){
        return "1";
    }
    else
    count("1",2,n,ans);
    return ans;
}
void test(string &ans){
    ans = "vms";
    return;
}
string test1(string v){
    int c =1;
    string t;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1]){
            c++;
        }
        else{
            t = t+to_string(c);
            c=1;
            t = t+v[i];
        }
        
    }
    return t;
}
void C(string v, string &ans, int n, int k){
    if(k==n){
        ans = v;
    }
    else 
    C(test1(v),ans,n,k+1);
}
string cns(int n){
    string ans;
    if(n==1){
        return "1";
    }
    C("1",ans,n,2);
    return ans;
}

int main(){
string a;
a = cns(4);
cout<<a;
return 0;
}