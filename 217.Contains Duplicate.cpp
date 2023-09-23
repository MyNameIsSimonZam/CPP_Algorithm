#include<iostream>
#include<vector>
#include<set>


using namespace std;

bool containsDuplicate(vector<int>& nums) {
	set<int> s;
	for (int i = 0; i < nums.size(); i++) {
		if (s.count(nums[i]) == 1) return true;
		s.insert(nums[i]);
	}
	return false;
}

int main5() {
	vector<int> nums{ 1,1,1,3,3,4,3,2,4,2 };
	cout << containsDuplicate(nums);
	return 0;
}