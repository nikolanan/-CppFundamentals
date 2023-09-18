#include <iostream>
using namespace std;

int smallest(int a,int b) {
    if (a > b) {
        return b;
    }
    return a;
}

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;

    int result = smallest(smallest(firstNumber, secondNumber), thirdNumber);

    cout << result;
}

