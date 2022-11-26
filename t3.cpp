#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
	
# define MAX 26
int main(){
    string str = "abde";
   	int chk[MAX];
    int i,j;
	for (i = 0; i < MAX; i++)
		chk[i] = -1;

	// Store the first occurring
	// index every character
	for (i = 0; i < str.length(); i++) {

		// If current character is appearing
		// for the first time in str
		if (chk[str[i] - 'a'] == -1)
			chk[str[i] - 'a'] = i;
	}
    for(i=0;i<MAX;i++){
        cout<<chk[i];
    }
    return 0;
}