//#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> my_map;
	for (int i = 0; i < nums.size(); i++) {
		if (my_map.count(target - nums[i]) == 1) return { i, my_map[target - nums[i]] };
		my_map[nums[i]] = i;
	}
	return { -1,-1 };
}

int main4() {

	vector<int> nums{ 3, 2, 4 };
	int target = 6;

	return 0;
}