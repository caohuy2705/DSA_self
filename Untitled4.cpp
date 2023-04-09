#include <bits/stdc++.h>
using namespace std;

int unit_digit(string s) {
	int count = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == '0' || s[i] == '4' || s[i] == '8') 
			count++;
		}
	return count;
}

int multi_digit(string s) {
	int count = 0;
	int num;
	for(int i = 0; i < s.length(); i++) {
		num = (s[i]-'0')*10+(s[i+1]-'0');
		if(num % 4 == 0)
			count = count +(i+1);
		}
	return count;
}

int main() {
	string s;
	cin >> s;
	
	int cnt_unit = unit_digit(s);
	int cnt_multidigit = multi_digit(s);
	int answer = (cnt_unit + cnt_multidigit);
	cout << answer << endl;
	return 0;
}
