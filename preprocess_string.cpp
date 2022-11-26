#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
   
    
string preprocess(string s)
{
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        
        if(s[i] >='a' && s[i] <= 'z' && s[i]>='0' && s[i]<='9')
        {
            s[j] = s[i];
            j++;
        }
        
    }
    return s.substr(0, j);
}

string p1(string s){
    auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
    return !std::isalnum(c);
    });
 
    s.erase(it, s.end());
    return s;
}

int main(){
    string s = "0abc1";
    string s1 = p1(s);
    cout<<s1;
    return 0;
}