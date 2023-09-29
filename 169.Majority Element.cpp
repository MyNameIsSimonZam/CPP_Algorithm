#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
	int res = nums[0];
	int count = 1;
	for (int i = 1; i < nums.size(); i++) {
		if (res == nums[i]) count++;
		if (res != nums[i]) count--;
		if (count < 0) {
			res = nums[i];
			count = 1;
		}
	}
	return res;
}

//int main() {
//	vector<int> nums = { 2,2,1,1,1,2,2 };
//	cout << majorityElement(nums);
//}