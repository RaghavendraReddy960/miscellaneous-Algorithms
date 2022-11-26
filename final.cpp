#include <iostream>
#include<string.h>
using namespace std;

#define N 26
string swap(string s, int i,int j){
    if (i < s.length()-1) {
		char ch1 = s[i];
		char ch2 = char(j + 'a');
		for (i = 0; i < s.length(); i++) {
			if (s[i] == ch1)
				s[i] = ch2;

			else if (s[i] == ch2)
				s[i] = ch1;
		}
	}
    return s;
}

string driver(string str){
    int str1[N];
    int f1,f2;
    for(int i=0;i<N;i++){
        str1[i]=-1;
    }
    for (int i = 0; i < str.length(); i++) {
		if (str1[str[i] - 'a'] == -1)
			str1[str[i] - 'a'] = i;
	}
    	for (int i = 0; i < str.length(); i++) {

		bool flag = false;
        
		for (int j = 0; j < str[i] - 'a'; j++) {
			if (str1[j] > str1[str[i] - 'a']) {
				flag = true;
                f1=i;
                f2=j;
				break;  
			}
		}
		if (flag)
			break;
	}
    string ans = swap(str,f1,f2);
    return ans;

}

