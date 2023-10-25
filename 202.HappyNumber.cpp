#include<iostream>

using namespace std;

int sumSquare(int n) {
	int res = 0;
	while (n != 0) {
		int digit = n % 10;
		n = n / 10;
		res += digit * digit;
	}
	return res;
}

bool isHappy(int n) {
	int l = n;
	int r = sumSquare(n);
	while (r != 1 && l != r) {
		l = sumSquare(l);
		r = sumSquare(r);
		r = sumSquare(r);
	}
	return r == 1;
}


//int main() {
//	cout << isHappy(75);
//	return 0;
//}