#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool validator(vector <char> name) {
    int low = 0;
    int mid = 0;
    int high = 0;

    for (vector <char> ::iterator i = name.begin(); i != name.end(); i++) {
        switch (*i) {
        case '{':
            if (low != 0 || mid != 0) {
                return false;
            }
            high++;
            break;
        case'}':
            if (low != 0 || mid != 0) {
                return false;
            }
            high--;
            break;
        case '[':
            if (low != 0) {
                return false;
            }
            mid++;
            break;
        case ']':
            if (low != 0) {
                return false;
            }
            mid--;
            break;
        case '(':
            low++;
            break;
        case ')':
            low--;
            break;
        }
    }
    if (low != 0 || mid != 0 || high != 0) {
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    string text;
    getline(cin, text);

    vector <char> arrayOfBrackets;

    int textLength = text.length();

    arrayOfBrackets.reserve(textLength);

    for (int i = 0; i < textLength; i++) {
        arrayOfBrackets.push_back(text[i]);
    }

    if (validator(arrayOfBrackets)) {
        cout << "valid" << endl;
    }
    else {
        cout << "invalid" << endl;
    }

    return 0;
}

