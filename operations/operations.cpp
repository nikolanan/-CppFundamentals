#include <iostream>
using namespace std;
double operation(double a,double b,char symbol) {
	switch (symbol) {
	case '+': return (a + b); break;
	case '-': return (a - b); break;
	case '*': return a * b; break;
	case '/': if (b == 0) {
		return 'a';
	}
	return a / b; break;
	}

}
int main()
{
	double a, b;
	char symbol;
	cin >> a >> b >> symbol;

	double result = operation(a, b, symbol);

	if (result == 'a') {
		cout << "Can't divide by zero.";
	}
	else {
		cout << result << endl;
	}

}

