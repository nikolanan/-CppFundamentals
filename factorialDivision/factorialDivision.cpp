#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long long factorial(long long number) {
	if (number > 1) {
		return number * factorial(number - 1);
	}
	else {
		return 1;
	}
}
int main(){
	int a, b;
	cin >> a >> b;
	double firstResult = factorial(a);
	double secondResult = factorial(b);
	double finalResult = firstResult / secondResult;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << finalResult;

	return 0;
}

