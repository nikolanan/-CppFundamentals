#include <iostream>
#include <string>
#include <sstream>
#include <climits>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    istringstream words(text);
    ostringstream numbers(text);

    int currentMax = INT_MIN;

    string currentWord;
    while (words >> currentWord) {
        string temporaryNum = "";
        for (int i = 0; i <= currentWord.length(); i++) {
            if (isdigit(currentWord[i])) {
                temporaryNum += currentWord[i];
            }
        }
        int currentNum = stoi(temporaryNum);
        if (currentNum > currentMax) {
            currentMax = currentNum;
        }

    }
    cout << currentMax;
}

