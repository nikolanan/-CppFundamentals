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

    int numbersSum = 0;
    for (int i = 0; i < length; i++) {
        numbersSum += arr[i];
    }

    int average = numbersSum / length;

    for (int j = 0; j < length; j++) {
        if (arr[j] >= average) {
            cout << arr[j] << " ";
        }
    }
}

