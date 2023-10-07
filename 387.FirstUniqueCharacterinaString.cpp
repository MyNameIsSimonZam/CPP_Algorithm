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
	for (size_t i = 0; i < s.size(); i++) {
		if (mp[s[i]] == 1) return i; // mp[s[i]] обращаемся к элементу по ключу / s[i] - ключ
	}
	return -1;
}


//int main() {
//	string s = "leetcode";
//	cout << firstUniqChar(s);
//	return 0;
//}