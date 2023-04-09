#include <bits/stdc++.h>
using namespace std;

int maxBracket(char s[], int n) {
	int sum = 0;
	int maxi = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '(')
			sum += 1;
		else 
			sum -= 1;
		if(sum == 0) 
			maxi = i+1;
		}
		return maxi;
	}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin.ignore();
		char s[10000];
		cin >> s;
		int n = strlen(s);
		cout << maxBracket(s, n);
		return 0;
	}
}

				