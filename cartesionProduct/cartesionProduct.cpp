#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int* arr = new int[length];

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < length; i++) {
        int currentNumber = arr[i];
        for (int g = 0; g < length; g++) {
            cout << arr[g] * currentNumber << " ";
        }
    }
}

