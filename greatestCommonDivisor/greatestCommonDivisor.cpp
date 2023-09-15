#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (x >= y) {
		for (int i = x; i > 0; i--) {
			if (x % i == 0 && y % i == 0) {
				cout << i;
				break;
			}
		}
	}
	else {
		for (int i = y; i > 0; i--) {
			if (x % i == 0 && y % i == 0) {
				cout << i;
				break;
			}
		}

	}
}

