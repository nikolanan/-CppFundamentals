#include <iostream>
using namespace std;

void sign(int number) {
	if (number > 0) {
		cout << "The number " << number << " is positive.";

	}else if (number <0) {
		cout << "The number " << number << " is negative.";
	}
	else {
		cout << "The number 0 is zero.";
	}
}
int main()
{
	int n;
	cin >> n;

	sign(n);


}

