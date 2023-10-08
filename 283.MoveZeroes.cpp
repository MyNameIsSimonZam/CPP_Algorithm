#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int l = 0;
	int r = 1;
	while (r < nums.size()) {
		if (nums[r] == 0) {
			r++;
		}
		if (nums[r] != 0) {
			nums[l] = nums[r];
			nums[r] = 0;
			l++;
			r++;
		}
	}
}

//int main() {
//	vector<int> nums = { 0,1,0,3,12 };
//	moveZeroes(nums);
//	for (int n : nums) {
//		cout << n << ' ';
//	}
//	cout << '\n';
//	return 0;
//}