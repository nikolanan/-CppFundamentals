#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int currentMax = INT_MIN;
    int currentMin = INT_MAX;

    int number;

    for (int i = 1; i <= count; i++) {
        cin >> number;

        if (number > currentMax) {
            currentMax = number;
        }
        if (number < currentMin) {
            currentMin = number;
        }
    }
    cout << currentMin <<" "<< currentMax;
    
}

