#include <bits/stdc++.h>
#include <stack>
using namespace std;

//lifo: last in first out
//push
//pop
//top
//size
//empty

int main() {
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	cout << st.size() << endl;
	st.pop();
	st.pop();
	if(st.empty()) {
		cout << "Empty!" << endl;
	}
		
	return 0;
}