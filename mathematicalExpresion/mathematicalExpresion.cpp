#include <iostream>
#include <string>
using namespace std;

string checker(int firstPar, int secondPar) {
    if (firstPar == secondPar) {
        return "correct";
    }
    return "incorrect";
}
int main()
{
    string expression; // "((a + b) / 5 - d)";
    getline(cin, expression);

    int counterLeftBraces = 0;

    int found = expression.find("(");
    while (found != string::npos) { // or -1
        counterLeftBraces++;
        expression.erase(found, 1);
        found = expression.find("(");
    }

    int counterRightBraces = 0;

    int found2 = expression.find(")");
    while (found2 != string::npos) { // or -1
        counterRightBraces++;
        expression.erase(found2, 1);
        found2 = expression.find(")");
    }

    cout << checker(counterLeftBraces, counterRightBraces);
}

