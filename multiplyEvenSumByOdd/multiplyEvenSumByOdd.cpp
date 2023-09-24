#include <iostream>
#include <string>
using namespace std;

int oddEven(int number){
	
	int evenSum = 0;
	int oddSum = 0;

	string asString = to_string(number);
	int length = asString.length();

	int divider = 1;
	for (int j = 1; j < length; j++) {
		divider *= 10;
	}
	
	for (int i = 0; i < length; i++) {
		int n = number / divider;
		if (n % 2 == 0) {
			evenSum += n;
		}
		else {
			oddSum += n;
		}
		number = number % divider;
		divider = divider / 10;
	}

	return evenSum * oddSum;
	
}

int main()
{
	int n;
	cin >> n;
	cout << oddEven(n);
}

