#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;


int firstUniqChar(string s) {
	unordered_map<char, int>mp;
	for (size_t i = 0; i < s.size(); i++) {
		mp[s[i]]++;
	}

	unordered_map<char, int>mp_unique;
	for (auto& [k, v] : mp) {
		if (v == 1) {
			mp_unique.emplace(k, v);
		}
	}

	for (size_t i = 0; i < s.size(); i++) {
		if (mp_unique.count(s[i])) return i;
	}
	return -1;
}


int main() {
	string s = "leetcode";
	cout << firstUniqChar(s);
	return 0;
}