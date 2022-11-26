#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sum(n/10);
}
int maximum(int a,int b, int c){
   int result = a;
if(b > result){
  result = b;}
else if (c > result)
  result = c;
else
return result;
}
int rec(int a,int b,int c, int n){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int res = maximum(rec(a,b,c,n-a),rec(a,b,c,n-b),rec(a,b,c,n-c));
    if(res==-1){
        return -1;
    }
    return res+1;
}

int main(){
    int n = 0;
    int i =0;
    cout<<rec(12,14,11,23);
    return 0;
}