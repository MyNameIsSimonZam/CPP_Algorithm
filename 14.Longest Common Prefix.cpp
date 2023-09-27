#include<iostream>
#include<vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	string res_string;
	int min_size = strs[0].size();

	for (int i = 1; i < strs.size(); i++) {
		if (min_size > strs[i].size()) min_size = strs[i].size();
	}

	for (int ci = 0; ci < min_size; ci++) {
		char temp = strs[0][ci];
		for (int si = 1; si < strs.size(); si++) {
			char a = strs[si][ci];
			if (temp != a) return res_string;
		}
		res_string.push_back(temp);
	}
	return res_string;
}

int main8() {
	vector<string> strs = { "flower", "flow", "flower" };
	cout << longestCommonPrefix(strs);
	return 0;
}
