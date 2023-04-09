#include <bits/stdc++.h>
using namespace std;
  
int countSubStr(string s, int len) {
	int count = 0;
	for(int i = 0; i < len; i++) {
		int n = 0;
		for(int j = i; j < len; j++) {
			n = n * 10 + (s(j) - '0');
			if(n % 4 == 0)
				count++;
			}
		}
	return count;
}

int main() {
	string s;
	cin >> s;
	int len = s.length();
	cout << countSubStr(s, len);
}
