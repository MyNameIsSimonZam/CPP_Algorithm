#include<iostream>
#include<vector>

using namespace std;

int binarySearchLast0(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (r + l + 1) / 2;
		if (nums[mid] == 1) r = mid - 1;
		else l = mid;
		//cout << l << ' ' << r << '\n';
	}
	return l;
}

int binarySearchFirst1(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (r + l) / 2;
		if (nums[mid] == 1) r = mid;
		else l = mid + 1;
		//cout << l << ' ' << r << '\n';
	}
	return l;
}

int binarySearchFirstPos(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (r + l) / 2;
		if (nums[mid] >= 1) r = mid;
		else l = mid + 1;
	}
	return l;
}

int binarySearchLastNegWithout0(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (l + r + 1) / 2;
		if (nums[mid] >= 1) r = mid - 1;
		else l = mid;
	}
	return l;
}

//Ќаходим первый 0 и возвращаем его индекс -1
int binarySearchLastNegWith0(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (r + l) / 2;
		if (nums[mid] >= 0) r = mid;
		else l = mid + 1;
	}
	return l - 1;
}

int binarySearchLastNeg(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;
	int mid = 5;

	while (l != r) {
		int mid = (l + r) / 2;
		if (nums[mid] == 0) return binarySearchLastNegWith0(nums);
		if (nums[mid] > 0) r = mid;
		else l = mid + 1;
	}
	return binarySearchLastNegWithout0(nums);

}

int maximumCount(vector<int>& nums) {
	if (nums[0] == 0 and nums[nums.size() - 1] == 0) return 0;
	int pos = binarySearchFirstPos(nums);
	int neg = binarySearchLastNeg(nums) + 1;
	if (neg > nums.size() - pos) return neg;
	return nums.size() - pos;
}

int binarySearchFirstPosNew(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l < r) {
		int mid = (r + l) / 2;
		if (nums[mid] >= 1) r = mid;
		else l = mid + 1;
	}
	if (nums[l] <= 0) return nums.size();
	return l;
}

int binarySearchLastNegNew(vector<int>& nums) {
	int l = 0;
	int r = nums.size() - 1;

	while (l != r) {
		int mid = (l + r + 1) / 2;
		if (nums[mid] >= 0) r = mid - 1;
		else l = mid;
	}
	if (nums[l] >= 0) return -1;
	return l;
}

int maximumCountNew(vector<int>& nums) {
	int pos = binarySearchFirstPosNew(nums);
	int neg = binarySearchLastNegNew(nums);
	int countPos = nums.size() - pos;
	int countNeg = neg + 1;
	if (countPos > countNeg) return countPos;
	return countNeg;
}

int main1()
{

	//				  0  1  2  3  4  5 6 7 8 9 10 11 12 13 14 15
	//vector<int> nums{ -7,-6,-5,-2,-1,1,2,3,4, 5, 6, 7, 8, 9 };
	//vector<int> nums{ -1563, -236, -114, -55, 427, 447, 687, 752, 1021, 1636 };
	//vector<int> nums{ 0, 0, 0, 0 };
	vector<int> nums{ -3,-2,-1,0,0,1,2 };


	cout << binarySearchFirstPosNew(nums) << '\n';
	cout << binarySearchLastNegNew(nums) << '\n';
	cout << '\n';
	cout << maximumCountNew(nums) << '\n';

	return 0;

}