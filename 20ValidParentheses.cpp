#include<iostream>
#include<stack>

using namespace std;

bool isValid(string s) {
	stack<char> st;
	for (char bkt : s) {
		if (bkt == '(' or bkt == '[' or bkt == '{') st.push(bkt);
		if (bkt == ')') {
			if (!st.empty() and st.top() == '(') st.pop();
			else return false;
		}
		if (bkt == ']') {
			if (!st.empty() and st.top() == '[') st.pop();
			else return false;
		}
		if (bkt == '}') {
			if (!st.empty() and st.top() == '{') st.pop();
			else return false;
		}
	}
	if (!st.empty()) return false;
	return true;
}


int main3() {
	string s = "]";
	cout << isValid(s);

	return 0;
}

