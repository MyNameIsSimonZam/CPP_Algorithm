#include<iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& height) {
	int l = 0;
	int r = height.size() - 1;
	int distance = height.size() - 1;
	int max = 0;

	while (l < r) {
		if (height[l] < height[r]) {
			max = height[l] * distance > max ? height[l] * distance : max;
			l++;
		}
		else {
			max = height[r] * distance > max ? height[r] * distance : max;
			r--;
		}
		distance--;
	}
	return max;
}


//int main() {
//	vector<int> height = { 1,8,6,2,5,4,8,3,7 };
//	cout << maxArea(height) << '\n';
//	return 0;
//}