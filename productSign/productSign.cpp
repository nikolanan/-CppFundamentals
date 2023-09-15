#include <iostream>
using namespace std;

int main()
{
    int sum = 1;
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 0 || b == 0 || c == 0) {
        cout << "+";
    }
    else {

        if (a > 0) {
            sum++;
        }
        if (b > 0) {
            sum++;
        }
        if (c > 0) {
            sum++;
        }

        if (sum % 2 == 0) {
            cout << "+";
        }
        else
        {
            cout << "-";
        }
    }




}

