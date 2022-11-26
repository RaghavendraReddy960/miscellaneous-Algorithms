#include <iostream>
#include<string.h>
using namespace std;
struct complex{
int r;
int c;
};
complex add(complex a, complex b){
    complex ans;
    ans.r = a.r+b.r;
    ans.c =a.c+b.c;
    return ans;
}

int main(){
    
    complex a ={1,2};
    complex b = {2,3};
    complex ans;
    ans = add(a,b);
    cout<<ans.r<<ans.c;
    return 0;
}