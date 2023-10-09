#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int l = 0;
	int r = 0;
	while (r < nums.size() && l < nums.size()) {
		if (nums[l] == nums[r]) {
			r++;
		}
		else {
			l++;
			nums[l] = nums[r];
		}
	}
	return l + 1;
}

//int main() {
//	vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
//	int k = removeDuplicates(nums);
//	cout << k << '\n';
//	for (int n : nums) {
//		cout << n << ' ';
//	}
//	cout << '\n';
//
//	return 0;
//}