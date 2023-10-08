#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int l = nums[0];
	int r = nums[1];
	int count = 1;
	while (r < nums.size() - 1) {
		if (nums[l] == nums[r]) {
			r++;
		}
		if (nums[l] != nums[r]) {
			l++;
			count++;
			nums[l] = nums[r];
		}
	}

	return count;
}

//int main() {
//	vector<int> nums = { 0, 0, 0, 1, 1, 1, 2, 3, 3, 4 };
//	int k = removeDuplicates(nums);
//	cout << k << '\n';
//	for (int n : nums) {
//		cout << n << ' ';
//	}
//	cout << '\n';
//
//	return 0;
//}