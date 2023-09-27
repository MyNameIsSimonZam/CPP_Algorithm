#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int missingNumber(vector<int>& nums) {
	int n = nums.size();
	int sum = (1 + n) * n / 2;
	for (int i = 0; i < nums.size(); i++) {
		sum -= nums[i];
	}
	return sum;
}

int missingNumber1(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int count = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != count) return count;
		count++;
	}
	return count;
}




int main7() {
	vector<int> nums = { 2,0 };
	cout << missingNumber(nums);

	return 0;
}

