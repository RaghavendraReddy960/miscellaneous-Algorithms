// C++ implementation of the approach
#include <iostream>
#include<string.h>
using namespace std;


#define MAX 26
string smallestStr(string str, int n)
{
	int i, j;
	int chk[MAX];
	for (i = 0; i < MAX; i++)
		chk[i] = -1;
	for (i = 0; i < n; i++) {
		if (chk[str[i] - 'a'] == -1)
			chk[str[i] - 'a'] = i;
	}
	for (i = 0; i < n; i++) {

		bool flag = false;
		for (j = 0; j < str[i] - 'a'; j++) {
			if (chk[j] > chk[str[i] - 'a']) {
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	if (i < n-1) {
		char ch1 = str[i];
		char ch2 = char(j + 'a');
		for (i = 0; i < n; i++) {
			if (str[i] == ch1)
				str[i] = ch2;

			else if (str[i] == ch2)
				str[i] = ch1;
		}
	}

	return str;
}
string ans(string s,int n){
    string ans1;
    ans1= smallestStr(s,n);
    if(ans1==s){
        return s;
    }
    else{
        ans(ans1,n);
    }
}
// Driver code
int main()
{
	string str = "tsaraa";
	int n = str.length();
    string ans1;
    ans1 = ans(str,str.length());
	cout << ans1;
	return 0;
}
