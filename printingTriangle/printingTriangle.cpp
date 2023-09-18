#include <iostream>
using namespace std;

void printer(int lastNumber) {
    for (int i = 1; i <= lastNumber; i++) {
        cout << endl;
        for (int j = 0; j < i; j++) {
            cout << j + 1 << " ";
        }
    }
    for (int f = lastNumber - 1; f > 0; f--) {
        cout << endl;
        for (int g = 0; g < f; g++) {
            cout << g + 1 << " ";
        }
    }
}
int main()
{
    int lastNumber;
    cin >> lastNumber;

    printer(lastNumber);


}

