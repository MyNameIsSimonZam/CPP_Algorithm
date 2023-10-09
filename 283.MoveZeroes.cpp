#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int l = 0;
	int r = 0;
	while (r < nums.size()) {
		if (nums[l] == 0 && nums[r] != 0) {
			nums[l] = nums[r];
			nums[r] = 0;
			l++;
		}
		else if (nums[l] != 0 && nums[r] != 0) {
			l++;
		}
		r++;
	}
}

//int main() {
//	vector<int> nums = { 0,0,1 };
//	moveZeroes(nums);
//	for (int n : nums) {
//		cout << n << ' ';
//	}
//	cout << '\n';
//	return 0;
//}