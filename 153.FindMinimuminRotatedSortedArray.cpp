#include<iostream>
#include<vector>

using namespace std;

int findMin(vector<int>& nums) {

	int res = nums.size() - 1;

	while (res != 0 && nums[res] > nums[res - 1]) {
		int l = 0;
		int r = res;
		while (l != r) {
			int mid = (l + r) / 2;
			if (nums[l] < nums[r]) {
				r = mid;
			}
			else {
				l = mid;
			}
		}
		res = l;
	}
	return nums[res];
}

int main() {
	//vector<int> nums{ 0,1,2,3,4,5 };
	//vector<int> nums{ 11,13,15,17 };
	//vector<int> nums{ 3,4,5,1,2 };
	//vector<int> nums{ 4,5,6,7,0,1,2 };
	//vector<int> nums{ 3,1,2 };
	//vector<int> nums{ 2,1 };
	//vector<int> nums{ 2,3,4,5,1 };
	//vector<int> nums{ 5,1,2,3,4 };
	//vector<int> nums{ 7,8,9,1,2,3,4,5,6 };
	//vector<int> nums{ 266,267,268,269,271,278,282,
	// 292,293,298,6,9,15,19,21,26,33,35,37,38,39,46,
	// 49,54,65,71,74,77,79,82,83,88,92,93,94,97,104,
	// 108,114,115,117,122,123,127,128,129,134,137,141,
	// 142,144,147,150,154,160,163,166,169,172,173,177,
	// 180,183,184,188,198,203,208,210,214,218,220,223,
	// 224,233,236,241,243,253,256,257,262,263 };

	cout << findMin(nums) << '\n';
	return 0;
}

