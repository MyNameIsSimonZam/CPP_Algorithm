#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

int giveMaxCandies(vector<int>& v) {
	int l = 0;
	int r = v.size() - 1;
	int el_l = v[l];
	int el_r = v[r];
	int maxCandies = 0;
	int count = 2;
	while (l < r) {
		if (el_l < el_r) {
			l++;
			el_l += v[l];
			count++;
		}
		else if (el_l > el_r) {
			r--;
			el_r += v[r];
			count++;
		}
		else if (el_l == el_r) {
			maxCandies = count;
			l++;
			el_l += v[l];
			r--;
			el_r += v[r];
			count++;
			count++;
		}
	}
	return maxCandies;
}


//int main1() {
//	ifstream fin;
//	fin.open("input.txt");
//	ofstream fout;
//	fout.open("output.txt");
//	int a;
//	fin >> a;
//	for (a; a > 0; a--) {
//		int b;
//		fin >> b;
//		vector<int> v;
//		for (b; b > 0; b--) {
//			int c;
//			fin >> c;
//			v.push_back(c);
//		}
//		int res = giveMaxCandies(v);
//		fout << res << '\n';
//	}
//	return 0;
//}

void file1() {
	int n;
	ifstream fin;
	fin.open("input.txt");
	fin >> n;
	ofstream fout;
	fout.open("output.txt");
	fout << n;
	}


//int main() 
// {
//	int n;
//	fstream finout("inout.txt", ios_base::in | ios_base::out);
//}