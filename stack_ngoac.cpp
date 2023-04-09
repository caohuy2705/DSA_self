#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
		cin >> s;
		stack<char> st;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '(') {
				st.push(s[i]);
			}
			else {
				if(st.empty()) {
					cout << "invalid" << endl;
					return;
				}
				else {
					st.pop();
				}
			}
		}
		if(st.empty()) {
			cout << "valid" << endl;
			}
			else cout << "invalid" << endl;	
		}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
}
