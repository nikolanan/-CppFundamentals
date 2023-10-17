#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;
    int* arr = new int[length];
    int arrCount[20];

    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    int currentNumber = 0;
    int f = 0;
    for (int i = 0; ; i++){

        if (currentNumber > 9) {
            break;
        }
        
        int totalOcurrences = 0;

        for (int g = 0; g < length; g++) {
            if (currentNumber == arr[g]) {
                totalOcurrences++;
            }
        }
        arrCount[f] = currentNumber;
        arrCount[f + 1] = totalOcurrences;
        currentNumber++;
        totalOcurrences = 0;
        f += 2;
    }
    
    /*cout << "-------" << endl;
    for (int i = 0; i < 20; i++) {
        cout << arrCount[i] << " ";
    }
    cout << "-------" << endl;*/
    int maxOccurences = 0;

    for (int i = 1; i < 20; i+=2) {
        if (arrCount[i] > maxOccurences) {
            maxOccurences = arrCount[i];
        }
    }

    int maximumRepetition = 0;
    for (int i = 1; i < 20; i++) {
        if (maxOccurences == arrCount[i]) {
            maximumRepetition++;
        }
    }

    for (int i = 1; i < 20; i+=2) {
            if (arrCount[i] == maxOccurences) {
                cout << arrCount[i - 1] << " ";
            }
        
    }
}

