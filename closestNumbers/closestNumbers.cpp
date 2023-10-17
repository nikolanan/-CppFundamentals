#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int* arr = new int[length];

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    
    int currentDifference = INT_MAX;
    if (length == 1) {
        currentDifference = 0;
    }
    else {
        for (int i = 0; i < length; i++) {
            int currentNumber = arr[i];
            for (int g = 0; g < length; g++) {
                if (i != g) {
                    int distance = INT_MAX;
                    if (arr[i] > 0 && arr[g] > 0 || arr[i] < 0 && arr[g] < 0) {
                        distance = abs(currentNumber - arr[g]);
                    }
                    else if (arr[i] < 0 && arr[g] >0) {
                        distance = abs(currentNumber - arr[g]);
                    }
                    else if (arr[i] > 0 && arr[g] < 0) {
                        distance = abs(currentNumber - arr[g]);
                    }
                    else if (arr[i] == 0 || arr[g] == 0) {
                        distance = abs(currentNumber - arr[g]);
                    }
                    if (distance < currentDifference) {
                        currentDifference = distance;
                    }
                }
            }
        }
    }

    cout << currentDifference;
}

