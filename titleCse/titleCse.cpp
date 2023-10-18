#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    if (!(text[0] >= 65 && text[0] <= 90) && (text[0] >= 97 && text[0] <= 122)) {
        text[0] = text[0] - 32;
    }

    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 32 && text[i] <= 47) {
            if (!(text[i+1]>= 65 && text[i+1] <=90) && (text[i+1] >= 97 && text[i+1] <= 122)) {
                text[i + 1] = text[i + 1] - 32;
            }
        }
    }
    cout << text;
}

