#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> res;
	sort(nums.begin(), nums.end());

	//for (int num : nums) {
	//	cout << num << ' ';
	//}
	//cout << '\n';

	for (int i = 0; i < nums.size() - 2; i++) {
		int r = nums.size() - 1;
		int l = i + 1;
		while (l < r) {
			int sum = nums[i] + nums[l] + nums[r];
			if (sum == 0) {
				vector<int> innerVector = { nums[i], nums[l], nums[r] };
				res.push_back(innerVector);
				l++;
				r--;
				while (l < r && nums[r] == innerVector[2]) {
					r--;
				}
				while (l < r && nums[l] == innerVector[1]) {
					l++;
				}
			}
			else if (sum > 0) {
				r--;
			}
			else {
				l++;
			}
		}
		while (i < nums.size() - 2 && nums[i + 1] == nums[i]) {
			i++;
		}
	}
	return res;
}

//int main() {
//	vector<int> nums = { -4, -1, -1, 0, 1, 2 };
//	vector<vector<int>> res = threeSum(nums);
//	for (vector<int> n : res) {
//		for (int num : n) {
//			cout << num << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}

