#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;




void singleNumber(vector<int>& nums) {
map<int,int>m;
int ans=0;
for(int i=0;i<nums.size();i++){
    m[nums[i]]--;
    }
for (auto i = m.begin(); i
         != m.end(); i++) {
        std::cout << i->first
                  << " : "
                  << i->second << '\n';
    }

}

int main(){
    int ans;
    vector<int>nums{1,2,2,1,3};
    //singleNumber(v);
         sort(nums.begin(),nums.end());
     //nums.erase(unique(nums.begin(),nums.end(),nums.end()));
      nums.erase(unique(nums.begin(), nums.end()), nums.end());
      cout<<nums[1];
   // cout<<ans;
    return 0;
}