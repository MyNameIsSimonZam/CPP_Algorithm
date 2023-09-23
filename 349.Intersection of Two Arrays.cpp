#include<iostream>
#include<vector>
#include<set>

using namespace std;

//vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//	set<int> s;
//	for (int i = 0; i < nums1.size(); i++) {
//		for (int el : nums2)
//			if (el == nums1[i]) s.insert(nums1[i]);
//	}
//	vector<int> res{ s.begin(),s.end() };
//
//	return res;
//}


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	set<int> s(nums1.begin(), nums1.end());
	set<int> s1(nums2.begin(), nums2.end());
	vector<int> res;
	for (int el : s) if (s1.count(el) == 1) res.push_back(el);
	return res;
}


int main6() {
	vector<int> array{ 1,2,2,1 };
	vector<int> array1{ 2,2,1 };
	vector<int> res = intersection(array, array1);
	for (int key : res)
		cout << key << ' ';
	cout << '\n';
}