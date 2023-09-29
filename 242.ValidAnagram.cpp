//#include<iostream>
//#include<string>
//#include<unordered_set>
//
//using namespace std;
//
//
//bool isAnagram(string s, string t) {
//	if (s.size() != t.size()) return false;
//	unordered_set<char> a(s.begin(), s.end());
//	for (int i = 0; i < t.size(); i++) {
//		if (a.count(t[i])) {
//			a.erase(t[i]);
//		}
//		else {
//			return false;
//		}
//	}
//	return true;
//}
//
//
//int main() {
//	string s = "anagram";
//	string t = "nagaram";
//	cout << isAnagram(s, t);
//	return 0;
//}



//__sort_and_comparison__O(n log n)

#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


bool isAnagram(string s, string t) {
	if (s.size()!= t.size()) return false;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	for (int i = 0; i < s.size(); i++)
		if (s[i] != t[i]) return false;
	return true;
}


//int main() {
//	string s = "anagram";
//	string t = "nagaram";
//	cout << isAnagram(s, t);
//	return 0;
//}