#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

// speed O(n), space O(26) = O(1)
bool isAnagram(string s, string t) {
	if (s.size() != t.size()) return false;
	unordered_map<char, int> mp;
	for (int i = 0; i < s.size(); i++) {
		if (mp.count(s[i])) {
			mp[s[i]]++;
		}
		else {
			mp[s[i]] = 1;
		}
	}
	for (size_t i = 0; i < t.size(); i++)
	{
		if (mp.count(t[i])) {
			mp[t[i]]--;
			if (mp[t[i]] < 0) {
				return false;
			}
		}
		else {
			return false;
		}
	}
	return true;
}


int main() {
	string s = "ccac";
	string t = "caac";
	cout << isAnagram(s, t);
	return 0;
}



//__sort_and_comparison__O(n log n)

//#include<iostream>
//#include<string>
//#include <algorithm>
//
//using namespace std;
//
//
//bool isAnagram(string s, string t) {
//	if (s.size()!= t.size()) return false;
//	sort(s.begin(), s.end());
//	sort(t.begin(), t.end());
//	for (int i = 0; i < s.size(); i++)
//		if (s[i] != t[i]) return false;
//	return true;
//}


//int main() {
//	string s = "anagram";
//	string t = "nagaram";
//	cout << isAnagram(s, t);
//	return 0;
//}



// сокращенная запись mp++
//bool isAnagram(string s, string t) {
//	if (s.size() != t.size()) return false;
//	unordered_map<char, int> mp;
//	for (int i = 0; i < s.size(); i++) {
//		mp[s[i]]++;
//	}
//	for (size_t i = 0; i < t.size(); i++) {
//		mp[t[i]]--;
//		if (mp[t[i]] < 0) {
//			return false;
//		}
//	}
//	return true;
//}