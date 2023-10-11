#include<iostream>

using namespace std;

bool isHappy(int n) {

	int digit = 1;
	int res = 0;
	int count = 0;

	while (res != 1 && count != 1000000) {
		while (n != 0) {
			digit = n % 10;
			n = n / 10;
			res += digit * digit;
		}
		if (res != 1) {
			n = res;
			res = 0;
			digit = 1;
		}
		count++;
	}
	if (res == 1) return true;
	else return false;
}


int main() {
	cout << isHappy(75);
	return 0;
}