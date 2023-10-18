#include <iostream>
#include <string>
using namespace std;

string comparison(string first, string second) {
    if (first == second) {
        return "equal";
    }
    else {
        return "not equal";
    }
}

int main()
{
    string firstArray, secondArray;

    getline(cin, firstArray);
    getline(cin, secondArray);

    cout << comparison(firstArray, secondArray);
}

