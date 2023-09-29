#include<iostream>
#include<map>


using namespace std;

int romanToInt(string s) {

	//map<char, int> mp;
	//mp['I'] = 1;
	//mp['V'] = 5;
	//mp['X'] = 10;
	//mp['L'] = 50;
	//mp['C'] = 100;
	//mp['D'] = 500;
	//mp['M'] = 1000;

	map<char, int> mp = {
	{'I' , 1},
	{'V' , 5},
	{'X' , 10},
	{'L' , 50},
	{'C' , 100},
	{'D' , 500},
	{'M' , 1000}
	};

	int res = mp[s[s.size() - 1]];
	for (size_t i = s.size() - 1; i > 0; i--) {
		if (mp[s[i - 1]] < mp[s[i]]) {
			res -= mp[s[i - 1]];
		}
		if (mp[s[i - 1]] >= mp[s[i]]) {
			res += mp[s[i - 1]];
		}
	}
	return res;
}


//int main() {
//	string s = "III";
//	cout << romanToInt(s);
//	return 0;
//}