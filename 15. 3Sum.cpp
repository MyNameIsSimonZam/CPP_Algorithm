#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	int l = 0;
	int r = 1;
	vector<vector<int>> res;
	for (int i = 0; i < nums.size(); i++)
	{
		while (r < nums.size()) {
			if (r != i && l != i) {
				if (nums[i] + nums[l] + nums[r] == 0) {
					vector<int> innerVector = { nums[i], nums[l], nums[r] };
					res.push_back(innerVector);
				}
			}
			l++;
			r++;
		}
	}
	return res;
}

int main() {
	vector<int> nums = { -1,0,1,2,-1,-4 };
	vector<vector<int>> res = threeSum(nums);

	for (vector<int> n : res) {
		for (int num : n) {
			cout << num << ' ';
		}
		cout << '\n';
	}
	return 0;
}

