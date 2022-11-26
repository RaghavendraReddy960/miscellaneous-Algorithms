#include<iostream>
using namespace std;
struct A{
    void func(){
        cout<<"Hello world"<<endl;
    }
};
int main(){
   union abc {
    double a,b;
    char ch;
    int i;
   };
  // cout<<sizeof(int)<<endl;
   cout<<sizeof(abc);
   return 0;
}