#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int firstUniqChar(string s) {

	for (int i = 0; i < s.size(); i++) {
		int temp = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[i] == s[j]) {
				temp++;
			}
		}
		if (temp == 1) {
			return i;
		}
	}
	return -1;
}



//int main() {
//	string s = "loveleetcode";
//	cout << firstUniqChar(s);
//	return 0;
//}