#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    istringstream stream(text);

    ostringstream streamWords;
    int sum = 0;

    string currentWord;
    while (stream >> currentWord) {
        if (isdigit(currentWord[0]) || currentWord[0] == 45) {
            sum+= stoi(currentWord);
        }
        else {
            streamWords << currentWord <<' ';
        }
    }
    cout << sum << endl;
    cout << streamWords.str();

}

