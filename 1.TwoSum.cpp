#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSumLeetcode(vector<int>& nums, int target) {
	map<int, int> my_map;
	for (int i = 0; i < nums.size(); i++) {
		if (my_map.count(target - nums[i]) == 1) return { i, my_map[target - nums[i]] };
		my_map[nums[i]] = i;
	}
	return { -1,-1 };
}


void twoSum(vector<int>& nums, int target) { // Сделать за О(1) по памяти
	int l = 0;
	int r = nums.size() - 1;
	while (l < r) {
		int sum = nums[l] + nums[r];
		if (sum < target) l++;
		else if (sum > target) r--;
		else cout << l++ << " " << r-- << '\n';
	}
}


//int main() {
//
//	vector<int> nums{ 2, 3, 4, 5, 6, 7, 8 }; // найти все пары 
//	int target = 11;
//	twoSum(nums, target);
//
//	return 0;
//}