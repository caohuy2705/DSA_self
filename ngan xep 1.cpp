#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> st;
	int n;
	string s;
	while(cin >> s) {
		if(s == "pop" and st.size())
			st.pop();
		else if(s == "push") {
			cin >> n;
			st.push(n);
		}
		else {
			if(st.empty())
				cout << "empty" << endl;
		else {
			stack<int> temp;
			while(st.size()) {
				temp.push(st.top());
				st.pop();
			}
			while(temp.size()) {
				cout << temp.top() << " ";
				st.push(temp.top());
				temp.pop();
			}
			cout << endl;
		}
	}
}
return 0;
}
