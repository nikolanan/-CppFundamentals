#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int* arr = new int[length];

    int allOcurrences = 0;
    int currentSuccessful = 0;

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < length; i++) {
        int currentElement = arr[i];
        int currentOccurences = 0;

        for (int j = 0; j < length; j++) {
            int otherElement = arr[j];
            
            if (currentElement == otherElement) {
                currentOccurences++;
            }
        }
        if (currentOccurences >= allOcurrences) {
            allOcurrences = currentOccurences;
            currentSuccessful = currentElement;
        }
        currentOccurences = 0;

    }
    
    for (int i = 0; i < allOcurrences; i++) {
        if (allOcurrences - 1 == i) {
            cout << currentSuccessful;
        }
        else {
            cout << currentSuccessful << " ";
        }
    }
}

