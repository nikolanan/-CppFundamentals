#include <iostream>
using namespace std;

void arrayComparerer(int length1, int length2,int arr1[], int arr2[]) {
    bool statement = true;

    if (length1 != length2) {
        cout << "Not equal";
    }
    else {

        for (int i = 0; i < length1; i++) {
            if (arr1[i] != arr2[i]) {
                statement = false;
                break;
            }
        }
        if (statement == false) {
            cout << "Not equal";
        }
        else {
            cout << "equal";
        }
    }
}

int main()
{
    int length1;
    cin >> length1;
    int*arr1 = new int[length1];

    for (int i = 0; i < length1; i++) {
        cin >> arr1[i];
    }

    int length2;
    cin >> length2;
    int* arr2 = new int[length2];

    for (int j = 0; j < length2; j++) {
        cin >> arr2[j];
    }
    
    arrayComparerer(length1, length2, arr1, arr2);
}

