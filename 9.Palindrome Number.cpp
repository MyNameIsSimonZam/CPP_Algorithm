#include<iostream>;
#include <cmath>;

using namespace std;


bool isPalindrome(int x) {
	if (x < 0) return false;
	int zeroCount = 0;
	int temp = x;
	while (temp >= 10) {
		temp = temp / 10;
		zeroCount++;
	}
	while (zeroCount > 0) {
		int a = pow(10, zeroCount);
		int firstNumber = x / a;
		int lastNumber = x % 10;
		if (firstNumber != lastNumber) return false;
		x = (x % a) / 10;
		zeroCount = zeroCount - 2;
		if (zeroCount > 1 and x <= 10 and x > 0) return false;
	}
	return true;
}


int main9() {
	int number = 1000021;
	cout << isPalindrome(number);
	return 0;
}