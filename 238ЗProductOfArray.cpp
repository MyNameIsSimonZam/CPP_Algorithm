#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	int res = 1;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0)
			res = res * nums[i];
	}
	vector<int> answer(nums.size(), 0);
	int countZero = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 0) countZero += 1;
	}
	if (countZero == 0) {
		for (int i = 0; i < answer.size(); i++) {
			answer[i] = res / nums[i];
		}
	}
	if (countZero == 1) {
		for (int i = 0; i < answer.size(); i++) {
			if (nums[i] == 0)
				answer[i] = res;
		}
	}

	//for (int i = 0; i < answer.size(); i++) {
	//	cout << answer[i] << " ";
	//}
	return answer;
}

int main2() {
	vector<int> nums{ -1,1,0,-3,3,0 };
	vector<int> answer = productExceptSelf(nums);

	return 0;
}